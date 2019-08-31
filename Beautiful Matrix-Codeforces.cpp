#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[5][5],i1=0,j1=0;
	
	for(int i=0;i<5;i++)
	 	for(int j=0;j<5;j++){
	 		cin>>a[i][j];
	 		if(a[i][j]==1){
	 			i1=i;
	 			j1=j;
			}
		}
	i1=i1-2;
	i1=abs(i1);	
	j1=j1-2;
	j1=abs(j1);	
	cout<<(i1+j1);
	return 0;
}

