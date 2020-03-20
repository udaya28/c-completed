#include<conio.h>
#include<stdlib.h>
int product_of_prime(int n);
int prime(int n);
void main()
{
	int c,i;
	printf("\nEnter the number of test cases: ");
	scanf("%d",&c);
	int arr[c];
	for(i=0;i<c;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<c;i++)
	{
		int n=arr[i],product,next_prime_num;
		product=product_of_prime(n);
		next_prime_num=next_prime(product);
		//printf("%d %d ",product,next_prime_num);
		printf("\nFortunate number of %d is %d ",n,next_prime_num-product);
	}
}

int product_of_prime(int n)
{
	int count=1,x=2,product=1;
	while(count<=n)
	{
		if(prime(x))
		{
			product=product*x;
			count++;
		}
		x++;
	}
return(product);
}
int next_prime(int n)
{
	int temp=n;
	for(n;n>0;n++)
	{
		if(prime(n))
		{
			if(prime(n-temp))
			{
				return n;
			}
		}
	}
}
int prime(int n)
	{
		if(n==0 || n==1){
		return 0;
		}
		else if(n==2){
		return 1;
		}
		else
		{
			int y=2;
			for(y;y<n;y++)
			{
				if(n%y==0){
					return 0;
				}
			}
			return 1;
		}	
	}
	
