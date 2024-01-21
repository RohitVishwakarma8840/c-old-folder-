#include<iostream>
using namespace std;

bool isSorted(int arr[],int size ){

if(size==0 || size==1){
    return true;
}

if(arr[0]>arr[1]){   // for clarity you can just see its dry run on the internet 
    return false;    // copy paste code on the internet 
}

bool remainingpart=isSorted(arr+1,size-1);
return remainingpart;

}

int main(){

int arr[5]={2,4,6,9,9};
int size=6;

bool ans=isSorted(arr,size);

if(ans){
   cout<<"Array is sorted "<<endl;
}
else{
   cout<<"Array is not sorted "<<endl;
}

    return 0;
}








