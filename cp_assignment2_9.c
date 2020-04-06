/*9.)Write a program in C to print all perfect
 numbers in given range using the function. 
 Test Data :
Input lowest search limit of perfect numbers : 1 
Input Highest search limit of perfect numbers : 100
Expected Output :
The perfect numbers between 1 to 100 are :
6	28
*/
#include <stdio.h>
int perfect_num(int n);
int main() 
{
	int n, sum_of_factors ,end;
    printf( "Input lowest search limit of perfect numbers : " );
    scanf( "%d", &n );
    printf( "Input Highest search limit of perfect numbers : " );
    scanf( "%d" , &end );
    printf("The perfect numbers between %d to %d are :",n,end);
	for( n ; n<=end; n++ )
    {
        sum_of_factors = perfect_num(n);
	    if( sum_of_factors == n )
	    {
		    printf("  %d  ",n );
	    }
    }
  return 0;
}

//This function returns sum of factors of a given number
int perfect_num( int n )
{
int i, factor = 0;
for(i=1;i<n;i++)
{
	if( n%i == 0)
	{
		factor += i;
	}
}
return factor;
} 