#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int size;				//size of Array
	cin>>size;
	int a[size][3];
	
	for(int i=0;i<size;i++)
		for(int j=0;j<3;j++)
			cin>>a[i][j];	
			
	int c1_sum=0, c2_sum=0,c3_sum=0; 	//Store sum of columns
	
	for(int i=0;i<size;i++){
		c1_sum+=a[i][0]; 		//Adding Column 1
		c2_sum+=a[i][1];		//Adding Column 2
		c3_sum+=a[i][2];		//Adding Column 3
	}
	
	if((c1_sum==0) && (c2_sum==0) && (c3_sum==0))
		cout<<"YES";
	else
		cout<<"NO";
}

