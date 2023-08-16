#include <bits/stdc++.h>
using namespace std;

vector<int> unionArr(vector<int> &v1, vector<int> &v2){

    vector<int> ans;
    int i=0,j=0;
    int n1 = v1.size();
    int n2 = v2.size();

//i 
// 1,1,2,3,4,5

//j
// 2,3,4,4,5,6
    while(i<n1 && j<n2){

        if(v1[i]<=v2[j]){
            if(ans.size()==0 || ans.back()!=v1[i]){
                ans.push_back(v1[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back()!=v2[j]){
                ans.push_back(v1[j]);
            }
            j ++;
        }
    }
    
    while(i<n1){
        if(ans.size()==0 || ans.back()!=v1[i]){
            ans.push_back(v1[i]);
        }
        i++;
    }
    while(j<n2){
        if(ans.size()==0 || ans.back()!=v2[j]){
            ans.push_back(v2[j]);
        }
        j++;
    }

    return ans;
}

int main(){
  vector<int> v1 = {1,1,2,3,4,5};
  vector<int> v2 = {2,3,4,4,5,6};

  vector<int> ans = unionArr(v1,v2);
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;

    // cout<<ans.back()<<endl;

  return 0;
}