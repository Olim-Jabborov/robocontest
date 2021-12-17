#include <iostream>
using namespace std;

int main() {
  unsigned long int n,a,b,c,d;
  cin>>n;
  cin>>a>>b>>c;
  d=a+b+c;
  if(d>=n){
  cout<<"Yes";
  } else {
    cout<<"No";
  }
  return 0;
}