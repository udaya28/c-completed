/*4.   Tony Stark (Iron Man ) is a fun loving and a responsible avenger too. After fighting the civil war, he needs rest and needs to fresh up his mind. So he makes up his mind to go to a casino and play. When he reaches there, he finds out people are mad for a gambling on numbers game named as "BAAZI". Tony being an observant guy tries to observe the pattern in numbers. Like someone who gambled on 4 ,  6 , 12  , 18 , 30 , 42 , 198  won  the game  whereas the one who gambled on 1 , 2 , 3 , 5 , 7 , 8 , 9 , 10 , 11, 13 ... lost all his money. You have to help Tony play this game, by telling him whether he should play on the number he ( Tony ) decided to.
Input:
The first line of the input contains an integer T denoting the number of test cases. The description of each test case follows. Each test case contains a single line with 1 integer ' X ' on which Tony wants to play.
Output:
For each test case output a new line with ' Y ' to yes he should play on the given number and ' N ' for no he should'nt play on the given number .
Constraints: 
1<=T<=104
2 <= X <= 5 *103
Example:   
Input:
4
102
95
72
60
Output:
Y
N
Y
Y
Explanation:
In the first test case contains the number 102 ,  which means we have to find whether Tony should gamble on 102  given number or not  .
*/
#include<conio.h>
#include<stdlib.h>
int prime(int n);
void main()
{
	int n,i;
	printf("Enter the number of test cases: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		int nn;
		nn=arr[i];
		if(prime(nn-1) && prime(nn+1)){
			printf(" T ");
		}else{
			printf(" F ");
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
	
