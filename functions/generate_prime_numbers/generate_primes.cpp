#include<iostream>
using namespace std;



bool isPrime(int n){
  for(int i=2;i<n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

void generatePrime(int n){
  for(int i=2;i<=n;i++){
    if(isPrime(i)){
	cout<<i<<endl;
      }
  }
}
      

int main(){
  int n;
  cin>>n;

  generatePrime(n);
  
  return 0;
}
