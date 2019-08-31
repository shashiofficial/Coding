#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,l;
    char s[1000];
    gets(s);

    l=strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[i]=='.')
            printf("0");
        else if(s[i]=='-' && s[i+1]=='.')
        {
            printf("1");
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            printf("2");
            i++;
        }
        else
        {
            printf("Invalid Input");
            break;
    	}
    }
    return 0;
}
