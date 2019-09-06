#include<bits/stdc++.h>

using namespace std;

int main(){
	int i,j,n,a10=0,a20=0,a11=0,a21=0;
	cin>>n;

	int a[n][2],count=0;
	
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			cin>>a[i][j];

	for(i=0;i<n;i++){
		if(a[i][0] == 1)
			a11++;
		if(a[i][1] == 1)
			a21++;
	}

	a10=n-a11;
	a20=n-a21;
	
	if(a10>a11){
		for(i=0;i<n;i++){
			if(a[i][0] == 1){
				count++;
			}
		}
	}
	else{
		for(i=0;i<n;i++){
			if(a[i][0] == 0){
				count++;
			}
		}
	}
	
	if(a20>a21){
		for(i=0;i<n;i++){
			if(a[i][1] == 1){
				count++;
			}
		}
	}
	else{
		for(i=0;i<n;i++){
			if(a[i][1] == 0){
				count++;
			}
		}
	}
	
	cout<<count<<endl;
	return 0;
}
 
