#include <bits/stdc++.h>
using namespace std;

set<int> duplicate(vector<int> &A) {
  set<int> ans;
  int n = A.size();

  for(int i = 0; i < n; i++){

      for(int j = 0; j < n; j++){

          if(A[i] == A[j] && i != j){
                ans.insert(A[i]);
            //   break;
          }
      }
  }
  return ans;
}

//optimal solution
set<int> duplicate2(vector<int> &A) {
  //  0 1 2 3 4 5 6 7
  //  4 3 2 7 8 2 3 1  
  set<int> ans;
  int n = A.size();

  for(int i = 0; i < n; i++){
      
      // logic : if the element is positive, make it negative
      if(A[abs(A[i])] >= 0){
          A[abs(A[i])] = -A[abs(A[i])];
      }
      else{
          ans.insert(abs(A[i]));
      }
  }
  return ans;
}

void print(set<int> &ans){
    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;
}

int main(){

    vector<int> A = {4,3,2,7,8,2,3,1};
    set<int> ans = duplicate2(A);

    print(ans);
  

  return 0;
}