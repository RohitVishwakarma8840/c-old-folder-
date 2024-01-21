#include<iostream>
using namespace std;

int pow(int n){

    if(n==0)
    return 1;

    int smallerprob=pow(n-1);
    int biggerprob=2*smallerprob;

    return biggerprob;

}

int main(){
int n;
cout<<"enter n"<<endl;
cin>>n;

int ans=pow(n);
cout<<ans<<endl;

    return 0;
}