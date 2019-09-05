#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,min,max,mins=0,maxs=0;
	
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	min=a[0];
	max=a[0];
		
	for(int i=0;i<n;i++){
		
		if(a[i]<min){
			min=a[i];
			mins++;
		}
		
		else if(a[i]>max){
			max=a[i];
			maxs++;
		}
		
		else
			continue;
	}
	
	cout<<(mins+maxs);
	return 0;
}
