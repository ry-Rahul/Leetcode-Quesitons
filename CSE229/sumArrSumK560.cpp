#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int k){
    int ans = 0;
    int sum = 0;
    int size = arr.size();

    for(int i =0; i<size; i++){

        sum = 0;
        for(int j=i; j<size; j++){
            sum += arr[j];
            if(sum == k){
                ans++;
                // break;
            }
        }
    }
    return ans;
}


int main(){


    vector<int> v = {1,2,3};
    int k = 3;
    // int ans = solve(v,k);
    // cout << ans << endl;

    int ans2 = solve(v,k);

    cout << ans2 << endl;
  

  return 0;
}