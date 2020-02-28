#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n=5,flag,i;  
  printf("Enter the number of the digits : ");
  scanf("%d",&n);
  int a[5]={3,5,7,9,5},b[n];
  printf("Enter 1 to encode the array \nEnter 2 to decode the array ");
  scanf("%d",&flag);
  printf("Entre the array ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  if(flag==1)
  {
    for(i=0;i<n-1;i++)
    {
      b[i]=a[i]+a[i+1];
    }
    b[n-1]=a[n-1];
  }
  else if(flag==2)
  {
    for(i=0;i<n;i++)
    {
      b[i]=a[i];
    }
     for(i=n-2;i>=0;i--)
     {
       b[i]=b[i]-b[i+1];
     
     }
  }else{
    printf("invalid input");
  }
  for(i=0;i<n;i++)
  {
      printf(" %d ",b[i]);
  }
  return 0;
}
