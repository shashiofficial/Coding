#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3];
    bool b[3][3];
    int i, j;
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            b[i][j] = true;
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            cin >> a[i][j];
    }
    
    if(a[0][0]%2 != 0)
    {
        b[0][0] = !b[0][0];
        b[1][0] = !b[1][0];
        b[0][1] = !b[0][1];
    }
    if(a[1][0]%2 != 0)
    {
        b[0][0] = !b[0][0];
        b[1][0] = !b[1][0];
        b[2][0] = !b[2][0];
        b[1][1] = !b[1][1];
    }
    if(a[2][0]%2 != 0)
    {
        b[2][0] = !b[2][0];
        b[2][1] = !b[2][1];
        b[1][0] = !b[1][0];
    }
    if(a[0][1]%2 != 0)
    {
        b[0][0] = !b[0][0];
        b[0][1] = !b[0][1];
        b[1][1] = !b[1][1];
        b[0][2] = !b[0][2];
    }
    if(a[1][1]%2 != 0)
    {
        b[1][1] = !b[1][1];
        b[0][1] = !b[0][1];
        b[2][1] = !b[2][1];
        b[1][0] = !b[1][0];
        b[1][2] = !b[1][2];
    }
    if(a[2][1]%2 != 0)
    {
        b[1][1] = !b[1][1];
        b[2][0] = !b[2][0];
        b[2][1] = !b[2][1];
        b[2][2] = !b[2][2];
    }
    if(a[0][2]%2 != 0)
    {
        b[0][1] = !b[0][1];
        b[0][2] = !b[0][2];
        b[1][2] = !b[1][2];
    }
    if(a[1][2]%2 != 0)
    {
        b[0][2] = !b[0][2];
        b[1][1] = !b[1][1];
        b[1][2] = !b[1][2];
        b[2][2] = !b[2][2];
    }
    if(a[2][2]%2 != 0)
    {
        b[2][2] = !b[2][2];
        b[2][1] = !b[2][1];
        b[1][2] = !b[1][2];
    }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(b[i][j])
				cout << 1;
            else
				cout << 0;
        }
        cout << '\n';
    }        
    
    return 0;
}
