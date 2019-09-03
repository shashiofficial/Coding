#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[150],n,temp;
	scanf("%d",&n);
	if(n<=1)
		printf("-1 ");
	else if(n%2!=0)
			printf("-1 ");
	else
	{
		for(i=0;i<n;i++)
		{
			a[i]=i+1;
		}
		for(i=0;i<n;i+=2)
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
	}
}
