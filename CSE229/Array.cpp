#include <bits/stdc++.h>
using namespace std;

int n;

void displayArr(int arr[], int n){
  cout<<"Output of the Array"<<endl;
   for(int j=0; j<n; j++){
    cout<<arr[j]<<" ";
   }
   cout<<endl;
}

void insertAtIndex(int arr[],int index,int data){
  n++;

  for(int i=n; i>=index; i--) {
     arr[i]=arr[i-1];
  }
  arr[index]=data;
}

void deleteAtIndex(int arr[],int index){
  for(int i=index; i<n; i++) {
     arr[i]=arr[i+1];
  }
  n--;
}


int main()
{
  int i,k;
  cout<<"Enter the Size of the Array => ";
  cin>>n;

  int arr[n];
  for (int i = 0; i < n; i++)
    {
      cout<<"Enter Number for index "<<i<<" -> ";
      cin >> arr[i];
    } 


  displayArr(arr, n);

  insertAtIndex(arr, 3,500);
  displayArr(arr, n);

  deleteAtIndex(arr, 3);
  displayArr(arr, n);


}