#include <stdio.h>

int main()
{
  int i=1,n,fact=1;
  printf("Enter a positive number:");
  scanf("%d",&n);
  if(n<0)
    printf("Factorial of negatie number is not possible\n");
  else
    do{
      fact=fact*i;
      i++;}
    while(i<=n);
  printf("factorial of %d is %d",n,fact);
}