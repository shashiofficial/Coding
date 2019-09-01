#include<stdio.h>
#include<conio.h>
int main()
{
	int extract(int),y,copy;
	scanf("%d",&y);
	copy=y+1;
	while(extract(copy))
	{
		copy++;
	}
	printf("%d",copy);
}
int extract(int y)
{
	int d1,d2,d3,d4;
	d4=y%10;				//digit 4
	y/=10;
	d3=y%10;				//digit 3
	y/=10;
	d2=y%10;				//digit 2
	y/=10;
	d1=y;					//digit 1
	if(d1==d2 || d1==d3 || d1==d4 || d2==d3 || d2==d4 || d3==d4)	
		return 1;
	else 
	return 0;
}

