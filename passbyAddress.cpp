#include<iostream>
using namespace std;

void swap(int *ptr1,int *ptr2){  // here instead of sending variables we have sended pointer variables to 
   // make sure that the variables should swap there values 

*ptr1=20;
*ptr2=40;

}

int main(){
  int x=40;
  int y=20;

cout<<x<<endl;
cout<<y<<endl;

  swap(&x,&y);
cout<<"the values after swap are"<<endl;

cout<<x<<endl;
cout<<y<<endl;


    return 0;
}






