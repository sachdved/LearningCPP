#include<iostream>
using namespace std;

int main(){
  int n;
  int i=1;
  cin>>n;

  while (i<=n){
    int count=1;
    while (count<=n-i){
      cout<<'_';
      count++;
    }
    count=1;
    while (count<=2*i-1){
      cout<<count;
      count++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
