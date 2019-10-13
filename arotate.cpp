#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int size, ro;
        cin>>size;
        cin>>ro;
        int a[size];
        for(int i=0;i<size;i++)
            cin>>a[i];
        for(int i=0;i<ro;i++){
            int temp=a[size-1],j;
            for(j=size;j>0;j--)
                a[j]=a[j-1];
            a[0]=temp;
        }
        for(int i=0;i<size;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}