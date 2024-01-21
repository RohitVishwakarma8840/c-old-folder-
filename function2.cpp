#include<iostream>
using namespace std;
int  main() {
int p=7;                           // global variable;
int apples=5;
cout<<apples<<endl;
for(int i=0;i<8;i++){

cout<<apples<<endl;
}                                 // scope of variables;

for(int i=0;i<5;i++){
    int p=4;
    cout<<p<<"  ";                // local variables;
}
    
    return 0;
}









