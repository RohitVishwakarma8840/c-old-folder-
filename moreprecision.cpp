#include <iostream>
using namespace std;
int binarysearch(int n) {
  int s = 0;
  int e = n;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e) {
    int square = mid * mid;
    if (square == n) {
      return mid;
    }
    if (square < n) {
      ans = mid;
      s = mid + 1;
    } else {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
double moreprecision(int n,int tempsoln,int precision){
    double factor=1;
    double ans=tempsoln;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans; j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}


int main() {
  int x; 
  cout << "enter your no" << endl;
  cin >> x;
  int tempsoln=binarysearch(x) ;
 double result=moreprecision(x,tempsoln,3);
cout<<result<<endl;
  return 0;
}

