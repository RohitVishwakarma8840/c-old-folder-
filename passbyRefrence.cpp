#include<iostream>
using namespace std; 

void update(int &n){  // here we have used a reference variable for doing this task

n++;


}



int main(){

int n=5;

cout<<"before update "<<n<<endl;
update(n);
cout<<"after update "<<n<<endl;


    return 0;
}




