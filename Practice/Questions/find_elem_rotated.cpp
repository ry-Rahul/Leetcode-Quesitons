#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
        int start=0,mid;
        int end = nums.size() -1;

        while (start < end) {
            mid = start + (end - start)/2;

            if(nums[mid]>nums[end])
                 start = mid +1;
            else
                end = mid;

        }
        return start;
}

int findArr1(vector<int> &nums, int target,int index){
    int start = 0;
    int end = index - 1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

    }

    return -1;
}

int findArr2(vector<int> &nums, int target,int index){
    int start = index;
    int end = nums.size() - 1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

    }

    return -1;
}

int findElem(vector<int> &nums, int target,int index){
    
    int ans1 = findArr1(nums,target,index);
    int ans2 = findArr2(nums,target,index);

    return max(ans1,ans2);
}

int main(){

  vector<int> arr = {4,5,6,7,0,1,2};
  int target = 90;
  int index = findMin(arr);
  cout<<index<<endl;
    cout<<findElem(arr,target,index)<<endl;


  return 0;
}