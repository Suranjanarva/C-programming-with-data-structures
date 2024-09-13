#include<stdio.h>
int add(int a,int b);
int add(int a,int b)
{
  return a+b;
}
int main()
{
  int x,y,sum;
  printf("Enter two numbers:");
  scanf("%d %d",&x,&y);
  sum=add(x,y);
  printf("The sum of two numbers is %d",sum);
}
