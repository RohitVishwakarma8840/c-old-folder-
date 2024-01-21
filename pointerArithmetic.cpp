#include<iostream>
using namespace std;

int main(){

int x=20;
int *ptr=&x;

double dec=9.3;
double *ptrd=&dec;


cout<<"size of "<<sizeof(x)<<endl;  
cout<<ptr<<endl;              
cout<<ptr+1<<endl<<endl;   // ptr+1 indicates that the next subsequent address of the memory 
cout<<ptr<<" "<<ptr-1<<endl;  // ptr-1 shows next subsequent memory location after ptr

cout<<ptrd<<endl;
cout<<ptrd+1<<endl;    // same here after ptrd the ptrd+1 is also a next address in the main memory


    return 0;    // if we have done the difference between 2 we can also do the difference between 3 
                 // or 4 also
}











