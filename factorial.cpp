#include<iostream>
using namespace std;

int fact(int n){
int factorial=1;
for(int i=1;i<=n;i++){
    factorial=factorial*i;

}
return factorial;
}
int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<"the answer is"<<endl<<ans<<endl;
    return 0;
}