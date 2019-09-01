#include<stdio.h>
#include<conio.h>
int main()
{
	char s[1000];
	gets(s);
	if((int)s[0]>=97 && (int)s[0]<=122)
		s[0]=(int)s[0]-32;
	puts(s);
}

