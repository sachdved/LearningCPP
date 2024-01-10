problem: given a number N, find how many times 1 appears in its binary representation
alternative framing: calculate number of set bits of a number
example:
input: 5 -> 101 -> output: 2
input: 7 -> 111 -> output: 3

solution: approach is to use bitwise operations. consider, number and 1
this yields n&1 = 1

We can then n>>1. This right shifts number in binary representation. repeatedly taking &1
Do this until number=0, keeping track of how many ones appear


pseudocode implementation

int number_of_ones = 0;
while {n!=0}
{ number_of_ones = number_of_ones + (n&1);
n= n>>1;
}
return number_of_ones;
