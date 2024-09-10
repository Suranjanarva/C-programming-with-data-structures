#include <stdio.h>
int main()
{
  int num,temp,digit,rev=0;
  printf("Enter the number:");
  scanf("%d",&num);
  temp=num;
  while(temp!=0)
    {
      digit=temp%10;
      rev=rev*10+digit;
      temp=temp/10;
      
    }
  if(rev==num)
    printf("The given number %d is palindrome",num);
  else
    printf("The given number is not a palindrome");
  
}