#include<iostream>
using namespace std;
int add(int num1,int num2){
int sum=num1+num2;
return sum;
}

int add(int num1,int num2 ,int num3){
int sum=num1+num2+num3;
return sum;
}

float add(float num1,float num2){
float sum=num1+num2;
return sum;
}




int main(){
int a,b;
cin>>a>>b;
add(a,b);
cout<<"the sum is"<<add(a,b)<<endl;
cout<<"the sum is"<<add(a,b,7)<<endl;
cout<<"the sum is"<<add(3.4f,4.8f)<<endl;
    return 0;
}









