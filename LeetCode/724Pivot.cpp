#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr){
    int size = arr.size();
    int sum = 0;
    int leftSum = 0;
    int rightSum = 0;

    // 1,7,3,6,5,6
    // for(int i = 0; i<size; i++){
    //     sum += arr[i];
    // }

    // for(int i = 0; i<size; i++){
    //     if(leftSum == rightSum){
    //         return i;
    //     }
    //     leftSum += arr[i];
    //     rightSum = sum - leftSum;
    // }
    // return -1;

    for(int i = 0; i<size; i++){
        
        for(int j = 0; j<i; j++){
            leftSum += arr[j];
            // cout<< "leftSum: " << leftSum << endl;
        }

        for(int k = i+1; k<size; k++){
            rightSum += arr[k];
            // cout<< "rightSum: " << rightSum << endl;
        }

        if(leftSum == rightSum){
            return i;
        }

        leftSum = 0;
        rightSum = 0;
    }
    return -1;
}

int main(){
//   vector<int> v = {1,7,3,6,5,6};
  vector<int> v = {2,1,-1};
  int ans = findPivot(v);
    cout << ans << endl;

  return 0;
}