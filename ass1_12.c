/*12.	The task is to find the Most Frequently Occurring Digits 
in a series of input numbers and then derive a key by adding all 
those digits. Below are a few examples.
EXAMPLE 1:
If the series of input numbers are [1237, 262, 666, 140]
We notice that,
0 occurs 1 time
1 occurs 2 times
2 occurs 3 times
3 occurs 1 time
4 occurs 1 time
5occurs 0 time
6 occurs 4 times
7 occurs 1 time
8 occurs 0 times
9 occurs 0 times
We observe that 
-4 is the highest frequency in this series and
-6 is the only digit that occurs 4 times.
Thus the most frequently Occuring digit in this series is only 6.
So, the key should be derived as= Sum of all Most 
Frequently Occurring digits=6
Note: if more than 1 digit occurs the most frequent time, 
key is obtained by adding all the digits as given below.
*/
#include<conio.h>
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
void count_numbers(int n);
void main()
{
	int po[]={1,2,3,4,5,6,7,8,9,0};
	int n,ii,max,max_count=0,position,key=0;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements : ");
	for(ii=0;ii<n;ii++)
	{
		scanf("%d",&arr[ii]);
	}
	for(ii=0;ii<n;ii++)
	{
		count_numbers(arr[ii]);
	}
	
	//printf("\n%d %d %d %d %d %d %d %d %d %d ",a,b,c,d,e,f,g,h,i,j);
	int count[]={a,b,c,d,e,f,g,h,i,j};
	max=count[0];
	for(ii=1;ii<10;ii++)
	{
		if(count[ii]>max)
		{
			max=count[ii];
		}
	}
	//printf("\nmax  %d",max);
	for(ii=0;ii<10;ii++)
	{
		if(count[ii]==max)
		{
			max_count++;
			position=ii;
		}
	}
	//printf("\nmax_count %d",max_count);
	if(max_count==1)
	{
		//printf("\nposition is %d",position);
		printf("\nThe key is %d",po[position]);
	}
	else
	{
		int arr_position[max_count],jj=0;
		for(ii=0;ii<10;ii++)
		{
			if(count[ii]==max)
			{
				arr_position[jj]=ii;
				jj++;
			}
		}
		for(ii=0;ii<max_count;ii++)
		{
			//printf("\nposition  %d",arr_position[ii]);
			key=key+po[arr_position[ii]];
		}
		printf("\nThe key is %d",key);
		
	}




}
void count_numbers(int n)
{
	int t;
	while(n){
		t=n%10;
		n=n/10;
		switch(t)
		{
			case 1:a++;break;
			case 2:b++;break;
			case 3:c++;break;
			case 4:d++;break;
			case 5:e++;break;
			case 6:f++;break;
			case 7:g++;break;
			case 8:h++;break;
			case 9:i++;break;
			case 0:j++;break;
		}
	}
}









