#include<stdio.h>
#include<conio.h>
int main(void)
{
  int a,b,c,d=0;
  printf("enter the number");
  scanf("%d",&a);
  printf("enter the power number");
  scanf("%d",&b);
  c=b;
  while(1)
  {
    c=c*b;
    if(a==c)
    {
      d=1;
      break;
    }
    if(c>a)
    {
      break;
    }
  }
  if(d==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
