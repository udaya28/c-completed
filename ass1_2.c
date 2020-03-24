/*2.    Given an integer n, find the nth Fortunate Number.
A Fortunate number is the smallest integer m > 1 such that, for a given positive integer 
n, pn + m is a prime number. Here pn is the product of the first n prime numbers, 
i.e prime factorials (or primorials) of order n.
Input:
The first line contains an integer T, number of test cases. For each test case,
 there is an integer n.
Output:
For each test case, the output is an integer m displaying the nth Fortunate Number.
Constraints:
1<=T<=10
1 <= n <= 10
Example:
Input:
2
3
5
Output:
7
23
Explanation:
1. 7 must be added to the product of first n prime numbers to make the product prime. 
2 x 3 x 5 = 30, need to add 7 to make it 37, which is a prime.
2. 23 must be added to the product of first n prime numbers to make the product prime.
 2 x 3 x 5 x 7 x 11= 2310, need to add 23 to make it 2333, which is a prime
*/
#include<conio.h>
#include<stdlib.h>
int product_of_prime(int n);
int prime(int n);
int next_prime(int n);
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
	
	
	
	
	
	






