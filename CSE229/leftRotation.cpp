#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> &nums,int n,int k){
   k = k%n;
   
   reverse(nums.begin(),nums.end());
   reverse(nums.begin()+k,nums.end());
   reverse(nums.begin(),nums.begin()+k);
}
int main(){
  int arr[] = {1, 2, 3, 4, 5};

  return 0;
}