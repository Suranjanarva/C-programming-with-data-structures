#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 50
int a[MAXSIZE];
int size=0;
void display()
{
  int i;
  if(size==0)
  {
    printf("list is empty");
  }
  else
  {
    for(i=0;i<size;i++)
      printf("%d",a[i]);
  }
  printf("\n");
}
void insertatposition(int position,int element)
{
  int i;
  for(i=size;i>position;i++)
    {
      a[i]=a[i-1];
    }
  a[position]=element;
  size++;
}
void deleteatposition(int position)
{
  int i;
  for(i=position;i<size-1;i++)
    {
      a[i]=a[i+1];
    }
  size--;
}
int main()
{
  while(1)
    {
      printf("1. insert end\n");
      printf("2. insert at position\n");
      printf("3. delete at position\n");
      printf("4. display\n");
      printf("5. exit\n");
      int choice,position,element;
      printf("enter your choice\n");
      scanf("%d",&choice);
      switch(choice)
        {
          case 1:if(size==MAXSIZE){
            printf("list is full\n");
            break;
          }
          printf("enter element to insert\n");
          scanf("%d",&element);
          a[size]=element;
          size++;
          break;
          case 2:if(size==MAXSIZE)
          {
            printf("list is full\n");
            break;
          }
          printf("enter position to insert\n");
          scanf("%d",&position);
          if(position<0)
          {
            printf("invalid position\n");
            break;
          }
          printf("enter element to insert\n");
          scanf("%d",&element);
          insertatposition(position,element);
          break;
          case 3:if(size==0){
            printf("list is empty\n");
            break;
          }
          printf("enter position to delete\n");
          scanf("%d",&position);
          if(position<0||position>=size)
          {
            printf("invalid position\n");
            break;
          }
          deleteatposition(position);
          break;
          case 4:display();
          break;
          case 5:exit(0);
          default:printf("invalid choice\n");
        }
    }
}