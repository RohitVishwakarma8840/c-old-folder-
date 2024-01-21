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
int even[6]={12,24,56,67,68};
int index=binearysearch(even,6,68);
cout<<"the index is"<<endl<<index<<endl;
    return 0;
}