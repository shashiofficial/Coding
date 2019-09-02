#include<stdio.h>
#include<conio.h>
int main()
{
	int u,l,z=0,i;
	int isprime(int);
	
	scanf("%d %d",&l,&u);
	
	if(isprime(l) && isprime(u))
	{
		for(i=l+1;i<u;i++)
		{
			if(isprime(i))
			{
				z=1;
				break;
			}
		}
		if(z==0)
			printf("YES");
		else
			printf("NO");
	}
	else
		printf("NO");
}
int isprime(int n)
{
	int i,c=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==0)
		return 1;
	else
		return 0;
}

