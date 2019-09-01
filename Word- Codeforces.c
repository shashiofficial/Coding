#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[1000];
	int i,u=0,l=0,ls;
	
	gets(s);
	ls=strlen(s);
	
	for(i=0;i<ls;i++)
	{
		if(s[i]>=65 && s[i]<=90)
			u++;
		else if(s[i]>=90 && s[i]<=122)
			l++;
		else
			continue;
	}
	
	if(u>l)
		for(i=0;i<ls;i++)
			printf("%c",toupper(s[i]));
	else
		for(i=0;i<ls;i++)
			printf("%c",tolower(s[i]));
}
