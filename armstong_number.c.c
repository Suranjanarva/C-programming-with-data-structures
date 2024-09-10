#include <stdio.h>
int main()
{
  int num,temp,result=0,rem;
  printf("Enter the number:");
  scanf("%d",&num);
  temp=num;
  while(temp!=0)
    {
      rem=temp%10;
      result=result+rem*rem*rem;
      temp=temp/10;
    }
  if(result==num)
    printf("%d is an armstong number",num);
  else
    printf("%d is not an armstong number",num);
  
}