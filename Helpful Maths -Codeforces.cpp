#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	int a=0,b=0,c=0,n;
	n=s.length();
	
	for(int i=0;i<n;i++){
		if(s[i]=='1')
			a++;
		if(s[i]=='2')
			b++;
		if(s[i]=='3')
			c++;
	}
	
	int count=0;
	 
	for(int i=0;i<a;i++){
		if(count==(n-1))
			cout<<"1";
		else{
			cout<<"1+";
			count+=2;
		}
	}
	
	for(int i=0;i<b;i++){
		if(count==(n-1))
			cout<<"2";
		else{
			cout<<"2+";
			count+=2;
		}
	}
	
	for(int i=0;i<c;i++){
		if(count==(n-1))
			cout<<"3";
		else{
			cout<<"3+";
			count+=2;
		}
	}
	return 0;
}

