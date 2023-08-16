#include <bits/stdc++.h>
using namespace std;

// total amout of money using 100 , 50 , 20 ,1 rupees notes

int main(){
  
   int n = 56,i=0 ,res = 0;

    int notes[] = {100,50,20,1};


    while(n>0){
      
      switch (notes[i])
      {
        case 100:{
          cout<<"100 rupees notes => "<<n/100<<endl;
          res = n/100;
          n = n - res * 100;
          i++;
        }
          break;
        
        case 50:{
          cout<<"50 rupees notes => "<<n/50<<endl;
          res = n/50;
          n = n - res * 50;
          i++;
        }
        break;

        case 20:{
          cout<<"20 rupees notes => "<<n/20<<endl;
          res = n/20;
          n = n - res * 20;
          i++;
        }
        break;

        case 1:{
          cout<<"1 rupees notes => "<<n/1<<endl;
          res = n/1;
          n = n - res * 1;
          i++;
        }
        break;
        
      }
      
    }



  return 0;
}