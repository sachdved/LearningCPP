#include<iostream>
using namespace std;

int main(){

  int i = 1;
  int n;
  int value=0;
  cin>>n;


  while(i<=n){
    int count=1;

    while(count<=i){

      cout<<(count+value)%2;
      count++;
    }
    
    cout<<endl;

    value = (value+1)%2;
    
    i++;
  }
  
  return 0;
}
