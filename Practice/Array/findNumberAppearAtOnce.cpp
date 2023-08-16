#include <bits/stdc++.h>
using namespace std;

//Brute Force
int singleNumber1(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

// 1,1,2,2,3,4,4

        for(int i=0; i<n; i++){
             cnt = 0;
            for(int j=0; j<n; j++){
                if(nums[i] == nums[j]){
                    cnt++;
                }
            }
            if(cnt == 1){
                return nums[i];
            }
        }
        return -1;
    }

//Optimal Solution
int singleNumber2(vector<int>& nums) {
        int n = nums.size();
        int xor_value = 0;

        for(int i= 0; i<n; i++ ){
            xor_value = xor_value ^ nums[i];
        }

        return xor_value;
    }

// by using map  nlogm + n/2+1 , m = n/2+1
int singleNumber3(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        // for(auto it = m.begin(); it != m.end(); it++){
        //     if(it->second == 1){
        //         return it->first;
        //     }
        // }

        for(auto i:m){
            if(i.second == 1){
                return i.first;
            }
        }
        return -1;
}


 
int main(){

    vector<int> v = {1,1,2,2,3,4,4};
    int ans = singleNumber3(v);
    cout << ans << endl;
    

  return 0;
}