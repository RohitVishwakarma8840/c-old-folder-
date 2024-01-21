#include<iostream>
using namespace std;
int sum(int n){
    int ans=0;
    for(int i=0;i<=n;i++){
        ans=ans+i;
    }
    return ans;
}


int main(){
    int n;
    cout<<"please enter your no"<<endl;
    cin>>n;
  int ans2=sum(n);
cout<<"the sum of n number is"<<endl<<ans2<<endl;
  return 0;
}