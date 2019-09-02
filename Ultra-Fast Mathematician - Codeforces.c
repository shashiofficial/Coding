#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	int i,l;
	char a[300],b[300];
	gets(a);
	gets(b);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]==b[i])
			printf("0");
		else
			printf("1");
	}
}

