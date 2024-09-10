#include <stdio.h>
#include<math.h>
int main()
{
  int num,temp,rem,digit=0,result=0;
  printf("Enter the number:");
  scanf("%d",&num);
  temp=num;
  while(temp!=0)
    {
      temp=temp/10;
      digit++;
    }
  temp=num;
  while(temp!=0)
    {
      rem=temp%10;
      result=result+pow(rem,digit);
      temp=temp/10;
    }
  if(result==num)
    printf("%d is an armstrong number",num);
  else
    printf("%d is not an armstrong number",num);
    
}