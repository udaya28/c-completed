#include <stdio.h>
int perfect_num(int n);
int main() 
{
	int n,sum_of_factors;
	printf("Enter the number : ");
	scanf("%d",&n);
	sum_of_factors=perfect_num(n);
	if(sum_of_factors==n)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
  return 0;
}
int perfect_num(int n)
{
int i,factor=0;
for(i=1;i<n;i++)
{
	if(n%i==0)
	{
		factor+=i;
	}
}
return factor;
}
