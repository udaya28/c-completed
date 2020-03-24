 /*5.    Given a number N, you have to find nearest prime number.
 If there are more then one, print the smaller one.*/
#include<stdio.h>
#include<stdlib.h>
void pri(int n);
int prime(int n);
int next_prime(int n);
int befour_prime(int n);
void main()
{
  int n,next_prime_num,befour_prime_num,next_prime_count,befour_prime_count;
  printf("Enter the number n ");
  scanf("%d",&n);
  next_prime_num=next_prime(n);
  befour_prime_num=befour_prime(n);
  next_prime_count=next_prime_num-n;
  befour_prime_count=n-befour_prime_num;
  if(next_prime_count>befour_prime_count || next_prime_count==befour_prime_count)
  {
    pri(befour_prime_num);
  }
  else
  {
    pri(next_prime_num);
  }
}
void pri(int n)
{
  printf("\nNearest prime number is %d",n);
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
  n=n+1;
  for(n;n>0;n++)
  {
    if(prime(n))
    {
      return n;
    }
  }
}
int befour_prime(int n)
{
    n=n-1;
    for(n;n>0;n--)
    {
      if(prime(n))
      {
        return n;
      }
    }
}






  
