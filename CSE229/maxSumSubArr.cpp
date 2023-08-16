#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr, int s, int e){
    for(int i = s; i<=e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findMaxSubArray(vector<int> &arr){
    int size = arr.size();
    int maxSum = INT_MIN;
    int sum = 0;
    int ansStart = -1;
    int ansEnd = -1;
    int start = 0;

    for(int i = 0; i<size ; i++){

        //finding 
        if(sum == 0){
            start = i;
        }

        sum += arr[i];

        if(sum > maxSum){
            maxSum = sum;

            ansStart = start;
            ansEnd = i;
        }


        if(sum<0){
            sum = 0;
        }
    }
    
    printArr(arr, ansStart, ansEnd);
    return maxSum;
}

int main(){
    vector<int> v = {-2,-3,4,-1,-2,1,5,-3};

     int ans = findMaxSubArray(v);
        cout << ans << endl;

  return 0;
}