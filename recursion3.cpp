#include<iostream>
using namespace std;

void reachHome(int src,int destination){

cout<<"source "<<src<<" destination "<<destination<<endl;

if(src==destination){
 cout<<"pahuch gaya "<<endl;
return ;
}

// processsing
src++;
reachHome(src,destination);

}

int main(){
int src=1;
int destination=10;
 reachHome(src,destination);

    return 0;
}









