#include<iostream>
using namespace std;

int main(){
int x=4;
int *ptr=&x;

cout<<ptr<<"  "<<ptr+1<<endl;

// ptr=ptr+1;
// instead of it what we can do we should ptr=+1;]
// this will also work same 
ptr+=1;


cout<<ptr<<endl;


    return 0;
}












