#include<iostream>
using namespace std;


int lastoccu(int arr[],int n,int key){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
if(arr[mid]==key){
     ans=mid;
    e=mid-1;
}
else if(arr[mid]>key){
    e=mid-1;
}
else if(arr[mid]<key){
    s=mid-1;
}  
mid=s+(e-s)/2;
}
return ans;
}

int main(){
int even[6]={1,2,3,3,3,3};
cout<<"the last index of key is"<<lastoccu(even,6,3)<<endl;

    return 0;
}
