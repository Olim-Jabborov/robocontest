#include <iostream>
using namespace std;

int main() {
  unsigned long int a,b;
  cin>>a>>b;
  if(a>b){
    cout<<">";
  } 
  else if(a<b){
    cout<<"<";
  }
  else {
    cout<<"=";
  }
  return 0;
}