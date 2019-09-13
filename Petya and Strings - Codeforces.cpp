#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	
	for(int i=0;i<s1.length();i++){
		if(s1[i]>=97 && s1[i]<=122)
			s1[i]=s1[i]-32;
		else 
			s1[i]=s1[i];
		
		if(s2[i]>=97 && s2[i]<=122)
			s2[i]=s2[i]-32;
		else
			s2[i]=s2[i];
	}
	
	int x= s1.compare(s2);
	if(x>0)
		cout<<"1";
	else if(x<0)
		cout<<"-1";
	else
		cout<<"0";
    
    return 0;	
}

