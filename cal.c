#include <stdio.h>

int main()
{
  int a,b;
  char c;
  printf("Enter the number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("Enter the operator:");
  scanf(" %c",&c);
  if(c == '+')
  {
    printf("The sum is %d",a+b);
  }
  else if(c == '-')
  {
    printf("The diff is %d",a-b);
  }
  else if(c == '*')
  {
    printf("The product is %d",a*b);
  }
  else if(c == '/')
  {
    if (b==0)
    {
      printf("division not possible");
    }
    else
    {
      printf("The remainder is %d",a/b);
    }
  }
  else
  {
    printf("invalid");
  }
}