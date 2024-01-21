#include<iostream>
using namespace std;


int main(){

int arr[3]={19,3,4};
int *ptr=&arr[0];

cout<<ptr<<endl;
cout<<arr<<endl; // arr is a name of pointer by default so instead of doing *ptr 
                 // what we can do we can use just arr for that purpose 
cout<<*ptr<<endl;
cout<<*arr<<endl;

cout<<*(ptr+1)<<endl;
cout<<*(arr+1)<<endl;

cout<<*(ptr+2)<<endl;
cout<<*(arr+2)<<endl;



    return 0;
}









