#include <bits/stdc++.h>
using namespace std;

int primeOrNot(int n){
    if(n == 1){
        return 0;
    }
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            return 0;
        }
    }

    return 1;
    
}

// _____________________________________________
int primeOrNot2(int n){

    // Corner cases
    if(n<=1) return false;
    if(n<=3) return true;

    if(n%2==0 || n%3==0) return false;

    for(int i=5; i*i<=n; i=i+6)
      if(n%i==0 || n%(i+2)==0)
        return false;
    
    return true;
}

// _____________________________________________
int fullPrime(int n){

    int ans = primeOrNot(n);
    int result;

    if(ans == 1){
        
        while(n != 0){
            result = primeOrNot(n%10);
            if(result == 0){
                return 0;
            }
            n = n/10;
        }

    }
    return 1;
}

// _____________________________________________
// int fullPrime2(int n){
  
//    while(n>0){
//     int digit = n%10;

//     if(digit!=2 && digit!=3 &&digit!=5 && digit!=7){
//          return false;

//     }
//    }

//    return true;

// }

// _____________________________________________
// by using fermit little theorem

// int byFermitLittleTheorem(int n){
     
// }


int main(){
     int n;
     cout<<"Enter the number: ";
        cin>>n;
    //     if(primeOrNot(n)){
    //         cout<<"Prime Number"<<endl;
    //     }
    //     else{
    //         cout<<"Not a Prime Number"<<endl;
    //     }

    //  if(fullPrime(n)){
    //      cout<<"Full Prime"<<endl;
    //  }
    //  else{
    //      cout<<"Not a Full Prime"<<endl;
    //  }

    // cout<<fullPrime2(n)<<endl;


    // if(byFermitLittleTheorem(n)){
    //     cout<<"Prime"<<endl;
    // }
    // else{
    //     cout<<"Not a Prime"<<endl;
    // }



  return 0;
}