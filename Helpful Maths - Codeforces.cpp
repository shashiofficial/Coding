#include<stdio.h>
#include<string.h>
int main()
{
	int i,c1=0,c2=0,c3=0,l,n=0;
	char s[1000];
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i+=2)
	{
		if(s[i]=='1')
			c1++;
		if(s[i]=='2')
			c2++;
		if(s[i]=='3')
			c3++;
	}
	for(i=0;i<c1;i++)
	{
		if(i>0)
			printf("+");
		printf("1");
		n++;
	}
	for(i=0;i<c2;i++)
	{
		if(n!=0)
			printf("+");
		printf("2");
		n++;
	}
	for(i=0;i<c3;i++)
	{
		if(n!=0)
			printf("+");
		printf("3");
		n++;
	}
}

