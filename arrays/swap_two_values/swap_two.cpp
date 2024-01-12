#include<iostream>
using namespace std;

int main(){
  int n;

  cout<<"Enter length of array"<<endl;
  cin>>n;
  
  int a,b;
  cout<<"Enter indices to be swapped, starting from zero"<<endl;

  cin>>a>>b;

  int c[n];
  
  for(int i=0;i<n;i++){
    cout<<"Enter "<<i<<"th element"<<endl;
    cin>>c[i];
  }

  int temp = c[a];
  int temp_2 = c[b];

  c[b] = temp;
  c[a] = temp_2;

  for(int i=0;i<n;i++){
    cout<<c[i];
  } 
  return 0;
}
