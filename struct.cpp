#include<iostream>
using namespace std;
struct employee{
int eid;
char favchar;
float salary;
};



int  main(){
struct employee rohit;
struct employee saurabh;
struct employee maurya;
rohit.eid=1;
rohit.favchar='r';
rohit.salary=1200000;
cout<<"the value are  "<<rohit.eid<<endl;
cout<<"the value are  "<<rohit.favchar<<endl;
cout<<"the value are   "<<rohit.salary<<endl;
saurabh.favchar='v';
cout<<"   "<<endl;
cout<<"the values are "<<saurabh.favchar<<endl;
    return 0;
}