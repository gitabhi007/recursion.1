#include <stdio.h>
int getSum (int n)
{
  if(n==0)
    return 0;
  else
  return n%10+getSum (n/10);
}
int main()
{
  int n,Sum;
  printf("enter a number :");
  scanf("%d",&n);
  Sum=getSum(n);
  printf("\nsum of digits of %d is %d",n,Sum);
  return 0;
}
 