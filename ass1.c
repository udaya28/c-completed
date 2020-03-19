#include<stdio.h>
#include<stdlib.h>
int prime(int n);
void main()
{
	
	int n,nn=0;
	int x;
	printf("Enter the number of test cases :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers :");
	for(nn;nn<n;nn++)
	{
		scanf("%d",&arr[nn]);
	}
	for(nn=0;nn<n;nn++)
	{
		int p=0,q=0,r=0,f=1;
		x=arr[nn];
		printf("\n%d ",x);
		for(p=0;p<x  && f==1;p++)
		{
			if(!prime(p)){
				continue;
			}
			else{
					for(q=0;q<x  && f==1;q++)
					{
						if(!prime(q)){
				        	continue;
			         	}
			    		else
						{
							for(r=0;r<x  && f==1;r++)
							{
					    		if(!prime(r)){
				         			continue;
				         		}
				        		else
				        		{
				        			if(p*q*r==x &&(p!=q && p!=r && q!=r))
				        			{
				        			printf("yes %d %d %d ",p,q,r);
				        			f=0;
									}
									else
									{
										continue;
									}
								}
							}
						}
				}	}
			
		}
	if(f==1)
	{
		printf("no");
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
	
