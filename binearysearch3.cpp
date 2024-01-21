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
if(arr[mid]>key){
end=mid-1;
}
else{
start=mid+1;
}
mid=(start+end)/2;

}
return -1;
}
int main(){
int odd[5]={12,34,67,98,62};
cout<<"the answer is"<<endl<<binearysearch(odd,5,34)<<endl;
    return 0;
}