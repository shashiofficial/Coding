#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	char temp;
	int l,swap;
	cin>>l>>swap;
	cin.ignore();
	getline(cin,s);
	for(int i=0;i<swap;i++)
		for(int j=0;j<l;j++){
			if((s[j]=='B') && (s[j+1]=='G'))
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
				j++;
			}
		}
	cout<<s;
	return 0;
}

