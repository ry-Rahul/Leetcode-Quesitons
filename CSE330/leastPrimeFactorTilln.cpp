#include <bits/stdc++.h>
using namespace std;

vector<int> leastPrimeFactorTilln(int n){

    vector<int> ans(n+1,0);

    for(int i = 2; i<=n; i++){
        if(ans[i] == 0){
            ans[i] = i;
            for(int j = i*i; j<=n; j+=i){
                if(ans[j] == 0){
                    ans[j] = i;
                }
            }
        }
    }
    return ans;
}

vector<vector<int>> findTwinPrimeNumbers(int n){
     vector<int> list = leastPrimeFactorTilln(n);
     int size = list.size();
     vector<vector<int>> ans;

     for(int i=3 ;i<size-1; i++){
            if(list[i] == i && list[i+2] == i+2){
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(i+2);
                ans.push_back(temp);
            }
     }

     return ans;
}
void printAns(vector<int> ans){
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
}

void printRes(vector<vector<int>> res){
    for(auto i: res){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int n = 100;
    // vector<int> ans = leastPrimeFactorTilln(n);
    // printAns(ans);

    vector<vector<int>> result = findTwinPrimeNumbers(n);
    printRes(result);

  

  return 0;
}