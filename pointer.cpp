#include<iostream>
using namespace std;
int main(){
int x=10;
float y=35.8;

int *ptr=&x;
cout<<ptr<<endl;
cout<<*ptr<<endl;


*ptr=39;
cout<<&x<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;

cout<<&x<<endl;
cout<<&y<<endl;





    return 0;
}


