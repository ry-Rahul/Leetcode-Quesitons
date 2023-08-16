#include <bits/stdc++.h>
using namespace std;

int deciToBinary(int num){
    int ans = 0;
    int i=0;

    while(num!=0){

        int bit = num&1;
        cout<<bit<<" ";
        ans = bit*(pow(10,i)) + ans;
        num = num>>1;
        i++;
    }

    return ans;
}


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    // cout<<deciToBinary(n)<<endl;
    if(n<0){
        n = n*(-1);

        int ans = deciToBinary(n);

        int newAns = (~ans);

        newAns = newAns + 1;
        cout<<newAns<<endl;
    }
    else{
        cout<<deciToBinary(n)<<endl;
    }
  

  return 0;
}