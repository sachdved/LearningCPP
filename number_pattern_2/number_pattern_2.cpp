#include<iostream>
using namespace std;

int main(){
  int i=1;
  int n;
  cin>>n;

  int count = 1;
  while (i<=n){
    count = 1;
    while (count<=n-i){
      cout<<'_';
      count++;
    }
    count = 1;
    while (count<=2*i-1){
      cout<<2*i-1 - abs(i-count);
      count++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
