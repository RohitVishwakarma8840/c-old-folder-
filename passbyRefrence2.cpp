#include<iostream>
using namespace std; 

void swap(int &a,int &b){  // here int &a is a reference variable whose address is same as that of 
int temp;                  // x pointing to the same address it is called as a reference variable 
cout<<a<<" "<<b<<endl;
cout<<&a<<" "<<&b<<endl;

temp=a;
a=b;                      // this process is called as call by reference process 
b=temp;

}

int main(){

int x=34;
int y=28;

swap(x,y);
cout<<x<<" "<<y<<endl;
cout<<&x<<" "<<&y<<endl;


    return 0;
}













