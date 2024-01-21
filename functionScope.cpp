#include<iostream>
using namespace std; 

string name="rohit";
int a=5;


void fun(){
    cout<<name<<endl;

    cout<<a<<endl;

 }



/*

void fun2(){
 int x=10;
 for(int y=0;y<=5;y++){
   x=x+y;
   int z=x*x;

 }

cout<<x<<" "<<y<<z<<endl;

*/

// this is an example of local scope here we are declared y and z locally

/*
{
int d=10;
}
                        here d is declared inside the block it cannot be accessed outside that 
cout<<d<j<endl;

*/








int main(){

 cout<<name<<endl;
 name="rv";
 cout<<name<<endl;
 
 //  cout<<y<<" "<<z<<endl;  local variables cannot be accessed outside the scope of that 

cout<<a<<endl;







    return 0;
}











