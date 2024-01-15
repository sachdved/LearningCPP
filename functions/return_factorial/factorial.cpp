#include<iostream>
using namespace std;


int calculate_factorial(int n){
  int ans=1;
  for(int i=1;i<=n;i++){
    ans = ans * i;
  }
  return ans;
}
    

int main(){

  int n;
  cin>>n;

  cout<<calculate_factorial(n);

  return 0;
}
