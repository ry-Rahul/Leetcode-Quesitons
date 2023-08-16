#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  a = 10;
  b = 5;
  int count = 0;

  while(a!=0 || b!=0){
     
     if(a&1){
       count++;
     }
        if(b&1){
        count++;
        }
        a = a>>1;
        b = b>>1;
  }

    cout << count << endl;



  return 0;
}