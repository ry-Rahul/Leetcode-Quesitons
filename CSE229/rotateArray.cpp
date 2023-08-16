#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void rotate(vector<int> &nums, int k){

  vector<int> v(nums.size());
  int n = nums.size();
  for (int i = 0; i < n; i++){
    v[(i + k) % n] = nums[i];
  }

  nums = v;
  for (auto i : nums){
    cout << i << " ";
  }
}

void rotateByReverse(vector<int> &nums, int k){

  int n = nums.size();
  k = k % n;
  reverse(nums.begin(), nums.end());
  reverse(nums.begin(), nums.begin() + k);
  reverse(nums.begin() + k, nums.end());

  for (auto i : nums){
    cout << i << " ";
  }
}

int main(){

  int arr1[] = {5, 7, 8, 9, 2};
  int arr2[5];
  int n;

  // cout << "Enter the Number of Rotation You want ";
  // cin >> n;

  // for (int i = 0; i < 5; i++)
  // {
  //   arr2[(i + n) % 5] = arr1[i];
  // }

  // printArr(arr2, 5);

  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  rotate(v, 3);

  cout << endl;

  vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};
  rotateByReverse(v1, 3);

  return 0;
}