#include<iostream>
#include<string>

using namespace std;

int main(){

string str="rohit ";        // remember them dont forgot them 
string str1("vishwakarma"); // these are the two ways to define a string 

cout<<str<<" "<<str1<<endl;

// string str_input;    // the cin operator can only work until there is a space tab and a new line occured 
// cin>>str_input;    // but this can only print one word for more you have to do another thing 

 // cout<<"the input given is "<<str_input<<endl;


string  str_wholeline;

getline(cin,str_wholeline);
cout<<"the whole line can be printed as "<<str_wholeline<<endl;

    return 0;
}







