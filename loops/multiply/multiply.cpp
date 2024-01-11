#include<iostream>
using namespace std;

int main(){
  int a;
  int b;
  int prod=0;

  cin>>a;
  cin>>b;

  for(int i=1;i<=b;i++){
    prod=prod+a;
  }
  cout<<prod;

  return 0;
}
