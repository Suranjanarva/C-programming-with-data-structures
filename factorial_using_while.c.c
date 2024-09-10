#include <stdio.h>

int main()
{
  int i,n,fact=1;
  printf("Enter a positive number:");
  scanf("%d",&n);
  i=n;
  if(n<0)
    printf("Factorial of negatie number is not possible\n");
  else
    while(i>0)
      {
        fact=fact*i;
        i--;
      }
  printf("factorial of %d is %d",n,fact);
}