#include<iostream>
using namespace std;
int firstoccu(int arr[],int n,int key){
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
    s=mid+1;
}
mid=s+(e-s)/2;
}
return ans;
}
int lastoccu(int arr[],int n,int key){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
if(arr[mid]==key){
     ans=mid;
    s=mid+1;
}
else if(arr[mid]>key){
    e=mid-1;
}
else if(arr[mid]<key){
    s=mid+1;
}  
mid=s+(e-s)/2;
}
return ans;
}
int main(){
int even[11]={1,2,3,3,3,3,3,3,3,5,9};
cout<<"the first occurence index  is  at  "<<firstoccu(even,11,3)<<endl;
cout<<"the last occurence index   is   at "<<lastoccu(even,11,3)<<endl;
    return 0;
}










