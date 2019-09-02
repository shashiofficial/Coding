#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c=0,i,l;
	string s;
	cin>>l;
	cin.ignore();
	getline(cin,s);
	for(i=0;i<l-1;i++)
	{
		if(s[i]==s[i+1])
			c++;
	}
	cout<<c;	
}

