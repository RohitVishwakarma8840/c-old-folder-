#include<iostream>
using namespace std;
int getpivot(int arr[],int size){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
while(s<e){
if(arr[mid]>arr[0]){
    s=mid+1;
}
else{
    e=mid;
}
mid=s+(e-s)/2;
}
return s;
}
int main(){
int even[6]={3,8,7,1,2,3};
int ans=getpivot(even,6);
cout<<"the pivot is   "<<ans<<endl;
    return 0;
}