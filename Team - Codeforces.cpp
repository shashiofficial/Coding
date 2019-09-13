#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int a[n][3];
	int c[n];
	for(i=0;i<n;i++){
		c[i]=0;
		for(j=0;j<3;j++)
			cin>>a[i][j];
	}
	for(i=0;i<n;i++){
		if((a[i][0] ==0  && a[i][1] ==0) || (a[i][1] ==0  && a[i][2] ==0) || (a[i][0] ==0  && a[i][2] ==0))
			continue;
		else
			c[i]=1;
	}
	int sum=0;
	for(i=0;i<n;i++)
		sum+=c[i];
	cout<<sum;
}
