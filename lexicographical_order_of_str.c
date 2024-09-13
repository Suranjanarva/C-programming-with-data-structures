#include <stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  printf("Enter the first word:");
  scanf("%s",a);
  printf("Enter the second word:");
  scanf("%s",b);
  int result=strcmp(a,b);
  if(result==0)
    printf("Both the strings are equal");
  else if(result<0)
    printf("%s comes before %s lexicographically",a,b);
  else
    printf("%s comes after %s lexicographically",a,b);
    
}
