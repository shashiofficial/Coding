#include<bits/stdc++.h>
using namespace std;
int BinSearch(int key, int a[], int l, int h){
    int m;
    while (l<=h)
    {
        m=(l+h)/2;
        if(key==a[m])
            return m;
        else if(key<a[m])
            h=m-1;
        else
        {
                l=m+1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter size of Array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    int temp;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i] < a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<"  ";
    cout<<endl<<"Enter number to be searched:"<<endl;
    int nn;
    cin>>nn;
    int r=BinSearch(nn,a,0,n);
    if(r>=0)
        cout<<"Element Found on "<<r+1<<"th position"<<endl;
    else
    {
            cout<<"Element not found"<<endl;
    }
    
    return 0;
}
