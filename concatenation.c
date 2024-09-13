#include <stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  printf("Enter the first word:");
  scanf("%s",a);
  printf("Enter the second word:");
  scanf("%s",b);
  strcat(a,b);
  printf("The new word is \n%s",a);//when we use strcat the new str will be save in the first str
}
