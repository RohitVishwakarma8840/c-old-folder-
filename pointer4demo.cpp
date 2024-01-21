#include<iostream>
using namespace std;


int main(){

int x,y;
cout<<"enter x and y "<<endl;
cin>>x>>y;

int *ptrx=&x;

int *ptry=&y;

int result;
int *ptr_result=&result;

*ptr_result=*ptrx+*ptry;
cout<<*ptrx<<endl;
cout<<*ptry<<endl;
cout<<*ptr_result<<endl;
cout<<""<<endl;

cout<<result<<endl;


cout<<ptrx<<endl;
cout<<ptry<<endl;
cout<<ptr_result<<endl;








    return 0;
}









