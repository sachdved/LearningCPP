#include<iostream>
using namespace std;


int length(char input[]){

  int count=0;
  for(int i=0; input[i] != '\0' ;i++){
    count++;
    
  }
  return count;
  
}


void reverse(char input[]){

  int s = 0;
  int e = length(input)-1;

  while(s<e){
    swap(input[s], input[e]);
    s++;
    e--;
  }

}


int main(){
  int n=100;
  char a[n];

  cout<<"Enter string length less than 100: ";
  
  cin.getline(a,n);

  cout<<"String is "<<a<<endl;

  reverse(a);
  cout<<"Reversed string is "<<a<<endl;
  
  return 0;
}

  

  
