#include<iostream>
using namespace std;

void process(int *arr,int n){
 *arr=99;
 for(int i=0;i<n;i++){
  cout<<*(arr+i)<<endl;

  // instead of this *(arri+1) what we can do is we can simply write 
  // it as cout<<arr[i]<<endl; both are equivalent  to each other 
  // remember that it just for short hand 
 }
}

int main(){
    int arr[3]={1,34,15};
 
   process(arr,3);

    return 0;
}






