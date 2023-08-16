#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        // for(auto i:ans){
        //     cout<<i<<" ";
        // }

        for(int i=0,j=1; i<n; i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
                // ans.insert(ans.begin(),nums[i]);
            }
        }
        for(int i=0; i<ans.size(); i++){
            nums[i] = ans[i];
        }
        for(int i=ans.size(); i<n; i++){
            nums[i] = 0;
        }

}

void moveZeroesOptimal(vector<int>& nums) {
        int n = nums.size();

        int j = 0;
        
        //finding first zero
        for(int i=0; i<n; i++){
            if(nums[i]==0){
               j = i;
               break;
            }
        }

        for(int i=j+1; i<n; i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
         
}

int main(){

    vector<int> v = {0,1,0,3,12};
    moveZeroesOptimal(v);
    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;
  

  return 0;
}