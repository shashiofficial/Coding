#include<iostream>
using namespace std;
void TOH(int n,char A,char B,char C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"Move disk from: "<<A<<" to "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}

int main(int argc, char const *argv[])
{
    cout<<"Enter no. of Disk"<<endl;
    int n;
    cin>>n;
    TOH(n,'A','B','C');
    return 0;
}
