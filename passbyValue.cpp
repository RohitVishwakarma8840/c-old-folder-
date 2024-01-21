#include<iostream>
using namespace std;

void change(int &p,int &q){   // instead of this 
p=99;
q=45;

}

int main(){
int x=4; 
int y=7;

change(x,y);
cout<<x<<" "<<y<<endl;

return 0;
}








