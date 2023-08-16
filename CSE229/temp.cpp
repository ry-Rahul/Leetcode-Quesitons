#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr){
    for(auto i: arr){
        cout << i << " ";
    }
    cout << endl;
}

/*void merge(vector<int>& nums1, int n, vector<int>& nums2, int m){

    printArr(nums1);
    printArr(nums2);
   
   int size1 = nums1.size();
   int size2 = nums2.size();
   vector<int> arr;
   int i=0,j=0,k=0;

   while(i<n && j<m){
       if(nums1[i]<nums2[j]){
           arr.push_back(nums1[i]);
           i++;
       }
       else{
           arr.push_back(nums2[j]);
           j++;
       }
   }

   while(i<n){
      arr.push_back(nums1[i++]);
   }
   while(j<m){
      arr.push_back(nums2[j++]);
   }

   sort(arr.begin(),arr.end());
   nums1=arr;
    
  printArr(nums1); 
} */

void merge(vector<int>& nums1, int n, vector<int>& nums2, int m){
    int size1 = nums1.size();
    int i = n-1;
    int j = m-1;
    int k = size1-1;

    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j])
            nums1[k--] = nums1[i--];
        else nums1[k--] = nums2[j--];
    }

    while(i>=0)
        nums1[k--] = nums1[i--];
    
    while(j>=0)
        nums1[k--] = nums2[j--];
    
    printArr(nums1);
}


/*
vector<int> dailyTemperatures(vector<int>& temperatures) {
    // 0  1   2  3  4  5  6  7
    // 73,74,75,71,69,72,76,73
        
    int size = temperatures.size();
    vector<int> ans(size,0);

    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
             if(temperatures[j]>temperatures[i]){
                    ans[i] = j-i;
                    break;
             }
        }
    }

    return ans;
}

*/

vector<int> dailyTemperatures(vector<int>& temperatures){
    
    int n = temperatures.size();
    vector<int> ans(n,0);
    stack<int> st;

    for(int i=n-1; i>=0 ; i--){
       
    //    if(st.empty()){
    //      ans[i]=0;
    //      st.push(i);
    //    }
    //    else{
          while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
              st.pop();

          }
            if(st.empty()){
                ans[i]=0;
                st.push(i);
            }
            else{
                ans[i] = st.top()-i;
                st.push(i);
            }
    //    }
    }

    return ans;
}
int main(){
   
//    vector<int> arr1 = {1,2,3,0,0,0};
//    vector<int> arr2 = {12,5,6};
//    merge(arr1, 3, arr2, 3);

//   Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3


//   return Temperature of the day Leetcode 739
//   Input: temperatures = [73,74,75,71,69,72,76,73]
// Output: [1,1,4,2,1,1,0,0]
    vector<int> arr = {73,74,75,71,69,72,76,73};
    vector<int> ans = dailyTemperatures(arr);
    printArr(ans);

  return 0;
}