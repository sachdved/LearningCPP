problem: Given N
print following pattern

input N=5;

print
____1
___123
__12345
_1234567
123456789

pseudocode:

int i = 1;
int n;

cin>>n;
while (i<=n)
      count = 1
      while (count<=n-i)
      	    cout<<'_'
	    count++

     count =1
     while (count<=2*i-1)
           cout<< count
           count++

     cout endl

