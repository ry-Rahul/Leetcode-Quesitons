#include <bits/stdc++.h>
using namespace std;

vector<int> duplicate(vector<int> &A) {
  vector<int> ans;
  int n = A.size();

  for(int i = 0; i < n; i++){

        int index = abs(A[i]) - 1;

        if(A[index] < 0){
            ans.push_back(index + 1);
        }
        else{
            A[index] = -A[index];
        }
  }
  return ans;
}

int main(){

    vector<int> A = {10,2,5,10,9,1,1,4,3,7};

    vector<int> ans = duplicate(A);

    for(auto i : ans){
        cout << i << " ";
    }
  

  return 0;
}