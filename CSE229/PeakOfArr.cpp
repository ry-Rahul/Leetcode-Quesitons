#include <bits/stdc++.h>
using namespace std;

// find peak element and return its index

int returnPeak(int arr[],int n){

    int low = 0;
    int high = n-1;
    
    while(low<=high){
        int mid = (low+high)/2;
    
        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid])){
        return mid;
        }
        else if(mid>0 && arr[mid-1]>=arr[mid]){
        high = mid-1;
        }
        else{
        low = mid+1;
        }
    }
    return -1;

}

int main(){

    int nums[] = {1,2,1,3,5,6,4};
    
    int n = sizeof(nums)/sizeof(nums[0]);

    cout<<returnPeak(nums,n)<<endl;
  

  return 0;
}