#include<stdio.h>
void swap(int *a, int *b)//defining the function
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  int a=10,b=20;
  printf("Before swapping %d %d\n",a,b);
  swap(&a,&b);//calling the function
  printf("After swapping %d %d\n",a,b);
  return 0;
}