#include <bits/stdc++.h>
using namespace std;

int complementOfBase10(int n)
{
    int mask = 0;
    int m = n;

     if(n == 0)
        return 1;

    while (m != 0)
    {
        mask = (mask<<1) | 1;
        m = m >> 1;
    }

    int ans = ((~n)&(mask));
    return ans;
}

int main()
{
    int n = 5;

    cout << complementOfBase10(n) << endl;
    
    

    return 0;
}