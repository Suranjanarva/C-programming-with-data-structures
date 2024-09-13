#include <stdio.h>
struct book{
char name[20];
int num;
float price;
};
int main()
{
   struct book hp;
  hp.price=100.0;
  hp.num=1;
  strcpy(hp.name,"harry potter");
  printf("the name of the book%s\n",hp.name);
  printf("price:%f\n",hp.price);
  printf("num:%d\n",hp.num);
}
