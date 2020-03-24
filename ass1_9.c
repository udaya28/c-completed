/*9.  A Kaprekar number is a non-negative integer, the representation of 
whose square in that base can be split into two parts that add up to the
 original number again. For instance, 45 is a Kaprekar number, 
 because 452 = 2025 and 20+25 = 45.  reff:: 9,45,55,99,297,703*/
#include<conio.h>
int length(int n);
void main()
{
  int n,square,square_length,first_half=0,second_half=0,temp;
  printf("\n  Enter the numbre to check : ");
  scanf("%d",&n);
  temp=n;
  square=n*n;
  square_length=length(square);
    if(square_length%2!=0)
    {
      printf("\n  Not a Kaprekar number");
  }
    else
    {
      int i,n,nn,ii=1;
      n=square;
      for(i=1;i<=square_length/2;i++)
      {
        nn=n%10;
        second_half=second_half+nn*ii;
        n=n/10;
        ii*=10;
    }
    ii=1;
    for(i=1;i<=square_length/2;i++)
      {
        nn=n%10;
        first_half=first_half+nn*ii;
        n=n/10;
        ii*=10;
    }
    if(first_half+second_half==temp)
    {
      printf("\n  Kaprekar number");
    }
    else
    {
      printf("\n  Not a Kaprekar number");
    }
  }
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






