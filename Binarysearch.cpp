#include<iostream>
using namespace std;
int binearysearch(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid=(start+end)/2;
while(start<=end){
if(arr[mid]==key){
    return mid;
}
if(key>arr[mid]){
    start=mid+1;
}
else{
    end=mid-1;
}
mid=(start+end)/2;
}
return -1;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
}
int key;
cout<<"int key"<<endl;
cin>>key;

int index=binearysearch(arr,n,key);
cout<<"the index is"<<endl<<index<<endl;
    return 0;
}