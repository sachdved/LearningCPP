#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"enter length of array"<<endl;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++){
    cin>>a[i];

  }

  int start = 0;
  int end = n-1;

  for(int i=0;i<n/2;i++){
    int sup = a[start];
    int inf = a[end];

    a[start]=inf;
    a[end]=sup;
    start++;
    end--;
  }

  for(int i=0;i<n;i++){
    cout<<a[i];
  }


  return 0;
}
