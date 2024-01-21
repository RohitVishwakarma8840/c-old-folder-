#include<iostream>
using namespace std;

int fact(int n){

if(n==0)
return 1;

int smallerprob=fact(n-1);
int biggerprob=n*fact(n-1);
return biggerprob;

// dry run it on paper for clarity
// // another way of doing it is
// directly write it as return n*fact(n-1)f;


}

int main(){

int ans=fact(5);
cout<<ans<<endl;


    return 0;
}

