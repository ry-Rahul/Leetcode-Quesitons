#include <bits/stdc++.h>
using namespace std;
void printArr(vector<int> &arr, int s, int e);

void changeArr(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }
    for(auto i: arr){
        cout << i << " ";
    }
    cout << endl;
}
int NiceArr(vector<int> nums, int k){

    changeArr(nums);
  int ans = 0;
  int presum = 0;
  int size = nums.size();
  map<int,int> mp;
    mp[0] = 1;

    for(int i = 0; i<size; i++){
        presum += nums[i];
        int remove = presum - k;
        if(mp.find(remove) != mp.end()){
            ans += mp[remove];
        }
        mp[presum]++;
    }

    return ans;
}

void printArr(vector<int> &arr, int s, int e){
    for(int i = s; i<=e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
//   vector<int> v = {2044,96397,50143};
  vector<int> v = {2,2,2,1,2,2,1,2,2,2};
  
  int k = 2;

  int ans = NiceArr(v,k);
    cout << ans << endl;

  return 0;
}