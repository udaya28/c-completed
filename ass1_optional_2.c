#include<stdio.h>
#include<stdlib.h>
void main()
{
  int n,i,max=0,a;
  printf("Enter the number of elements : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements : ");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n-1;i++){
     a=abs(arr[i]-arr[i+1]);
    if(a>max){
      max=a;
    }
  }
  printf("largest gap is %d",max);
}




