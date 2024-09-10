#include <stdio.h>

int main()
{
  int a,b;
  int c;
  printf("Enter the number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("Enter 1 for add ,2 for diff , 3 for pro , 4 for div:\n");
  scanf(" %d",&c);
  switch(c)
  {
    case 1:
      printf("%d",a+b);
      break;
    case 2:
      printf("%d",a-b);
      break;
    case 3:
      printf("%d",a*b);
      break;
    case 4:
      printf("%d",a/b);
      break;
    default:
      printf("invalid");
    
  }
}