#include <bits/stdc++.h>
using namespace std;

vector<int> CalPrimeFactor(int n){

    vector<int> ans;

    int k = 2;
    for(int i = 2; i<n-1;){
        
         while(n%k == 0){
            ans.push_back(k);
            n = n/k;
            k++;
         }
        
    }
    return ans;
}

void printPrime(vector<int> &arr){
    for(auto i: arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
  int n = 48;
  vector<int> ans = CalPrimeFactor(n);
  printPrime(ans);

  return 0;
}