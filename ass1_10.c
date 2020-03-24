/*10.	Write a Program to input a number and check whether
 it is a Harshad Number or Niven Number or not.
Harshad Number : In recreational mathematics, a Harshad number (or Niven number),
 is an integer (in base 10) that is divisible by the sum of its digits.
Let's understand the concept of Harshad Number through the following example:
The number 18 is a Harshad number in base 10, because the sum of
 the digits 1 and 8 is 9 (1 + 8 = 9), and 18 is divisible by 9 (since 18 % 9 = 0)
The number 1729 is a Harshad number in base 10, because the sum of
 the digits 1 ,7, 2 and 9 is 19 (1 + 7 + 2 + 9 = 19), and 1729 is divisible by 19 (1729 = 19 * 91)
The number 19 is not a Harshad number in base 10, because the sum of
 the digits 1 and 9 is 10 (1 + 9 = 10), and 19 is not divisible by 10 (since 19 % 10 = 9)
The first few Harshad numbers in base 10 are:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 18, 20, 21, 24, 27, 30, 36, 40, 42, 45, 48, 50,
 54, 60, 63, 70, 72, 80, 81, 84, 90, 100, 102, 108, 110, 111, 112, 114, 117, 120,
  126, 132, 133, 135, 140, 144, 150, 152, 153, 156, 162, 171, 180, 190, 192, 195,
   198, 200 etc.
*/
#include<conio.h>
int sum_of_digits(int n);
void main()
{
	int n,sum;
	printf("Enter the number to check : ");
	scanf("%d",&n);
	sum=sum_of_digits(n);
	if(n%sum==0)
	{
		printf("It is Harshad number or Niven number");
	}
	else
	{
		printf("It is not Harshad number or Niven number");
	}
}
int sum_of_digits(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%10;
		n=n/10;
	}
	return sum;
}



