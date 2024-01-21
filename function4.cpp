#include<iostream>
using namespace std;
int sum(int  ,int);    // function prototyping;
void greet(void);
int main(){
  sum(4,5); 
cout<<"the sum is ans"<<endl<<sum(4,5);
    return 0;
}

int sum(int a,int b){
    int c=a+b;
    return c;
}

void greet(){
    cout<<"hello good morning rohit"<<endl;
}






