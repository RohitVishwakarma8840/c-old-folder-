#include<iostream>
#include<vector>
using namespace std;
/*int main(){
vector<int> v;
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;
v.push_back(1);
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;
v.push_back(2);
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;
v.push_back(3);
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;

v.resize(5);
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;

v.resize(10);
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;

v.pop_back();
v.pop_back();
cout<<"size :"<<v.size()<<endl;
cout<<"capacity :"<<v.capacity()<<endl;      */


/*vector<int> v;

for(int i=0;i<5;i++){
int element;
cin>>element;
v.push_back(element);
}
cout<<"the output is"<<endl;
for(int i=0;i<v.size();i++){
 cout<<v[i]<<" ";

}   */
#include <iostream>
#include<vector>
using namespace std;
int main() {
cout << "Hello World"<<endl;
vector<int> v(6);
  for(int i=0;i<6;i++){
    cin>>v[i];
  }
int x;
int occurence=-1;
cout<<"enter element"<<endl;
cin>>x;
for(int i=0;i<v.size();i++){
if(v[i]==x){
  occurence=i;
}  
}
  cout<<occurence<<endl;
 return 0; 
}


  
