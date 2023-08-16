#include <bits/stdc++.h>
using namespace std;

bool checkTwistedPrime(int n){
   
   int k = n;
    int rev = 0;

    while(k>0){
        int rem = k%10;
        rev = rev*10 + rem;
        k = k/10;
    }
    // cout<<rev<<endl;
    bool ans = true;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            ans = false;
            break;
        }
    }
    return ans;
}
int main(){
  int n = 37;
  bool ans = checkTwistedPrime(n);
  cout<< ans << endl;

  return 0;
}