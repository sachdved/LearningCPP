#include<iostream>
using namespace std;

int compute_armstrong(char num[], int power){
  int armstrong = 0;
  for(int i=0;num[i]!='\0';i++){
    armstrong = armstrong + pow(std::atoi(num[i]),power);
  }
  return armstrong;
}

int main(){
  int n;
  cin>>n;

  char num = n;
  cout<<num;

  return 0;
}
