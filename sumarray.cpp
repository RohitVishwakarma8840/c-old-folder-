#include<iostream>
using namespace std;
int sumarray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum =sum+arr[i];
        
    }
    return sum;
}
int main(){
int arr[5]={1,2,3,4,5};
cout<<"the sum is"<<endl<<sumarray(arr,5)<<endl;


    return 0;
}