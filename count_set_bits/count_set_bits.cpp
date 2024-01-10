#include<iostream>
using namespace std;

int main(){
  int n;
  std::cin>>n;
  int number_of_ones = 0;
  while (n>0)
    {
      number_of_ones = number_of_ones + (n&1);
      n = n>>1;
    }
  std::cout<<number_of_ones;
  return 0;
}
