#include<iostream>
using namespace std;

int calculate_factorial(int n){
  int ans=1;
  for(int i=2;i<=n;i++){
    ans = ans*i;
  }
  return ans;
}

int n_c_r(int n, int r){
  return calculate_factorial(n)/(calculate_factorial(n-r)*calculate_factorial(r));
}

int main(){
  int n;
  int r;

  cout<<"give n"<<endl;
  cin>>n;

  cout<<"give r"<<endl;
  cin>>r;

  cout<<n_c_r(n,r);
  return 0;
}
