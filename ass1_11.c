/*11.	Alex has been asked by his teacher to do an assignment on powers
 of numbers. The assignment on powers. The assignment requires Alex to find
  the sum of powers of each digit of a given number, as per the method mentioned below.
If the given number is 582109,the sum of powers of digits will be calculated 
as= =(5 raised to the power of 0)+(8 raised to the power of 5)+
(2 raised to the power of 8)+(1raised to the power of 2)+
(0 raised to the power of 1)+(9 raised to the power of 0)
i.e each digit of the number is raised to the power of the
 next digit on its left-side. Note that the left-most digit
  has to be raised to the power of 0.  The sum of all of these
   powers is the expected result to be calculated.
Example 1:if the given number is 582109, the sum of  power of digits=
=(5 raised to the power of 0)+(8 raised to the power of 5)+
(2 raised to the power of 8)+(1raised to the power of 2)+
(0 raised to the power of 1)+(9 raised to the power of 0)|
=1+32768+256+1+0+1=33027
*/

#include<conio.h>
int power(int m,int n);
int length(int n);
void main()
{
	int n,l,i,sum=0,temp;
	printf("Enter the number : ");
	scanf("%d",&n);
	temp=n;
	l=length(n);
	int arr[l];
	for(i=l-1;i>=0;i--)
	{
		arr[i]=n%10;
		n=n/10;
	}
	n=temp;
	for(i=1;i<l;i++)
	{
		 sum=sum+power(arr[i],arr[i-1]);
	}
	printf("\nthe sum of  power of digits is %d",sum+1);
}
int power(int m,int n)
{
	int mm,nn=1;
	for(mm=1;mm<=n;mm++)
	{
		nn=nn*m;
	}
	return nn;
}
int length(int n)
{
	int i=0;
	while(n)
	{
		n=n/10;
		i++;
	}
	return i;
}












