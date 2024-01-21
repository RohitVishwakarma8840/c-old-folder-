#include<iostream>
using namespace std;

int main(){
int arr[2]={1,19};

int *ptr=&arr[0];
cout<<ptr<<" "<<*ptr<<endl;
cout<<ptr+1<<" "<<*ptr+1<<endl;

 cout<< *ptr++<<endl;   // here what is happening is first *ptr is printed then ptr++ happened so 
 cout<<*ptr<<endl;      // when *ptr is printed its value is changed from ptr to ptr++

 cout<<arr[0]<<" "<<arr[1]<<endl;
 cout<<ptr<<"   "<<*ptr<<endl;

    return 0;
}



