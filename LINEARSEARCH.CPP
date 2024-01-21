#include<iostream>
using namespace std;

int main(){
int arr[5]={41,68,99,78,63};
int check;
cin>>check;
for(int i=0;i<=4;i++){
if(check==arr[i]){
cout<<i<<endl;

}
}
    cout<<"element not found"<<endl;



    return 0;
}
