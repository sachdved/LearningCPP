problem: generate star pattern

eg output
input = 3
output =
*
**
***

input=6
output=
*
**
***
****
*****
******

logic:


cin>>n;
int i=1;
int count = 0;

while (i<=n)
{ while (count<i)
{ cout<<'*';
  count++;
  }
  cout<<'\n';
  count = 0;
  }
