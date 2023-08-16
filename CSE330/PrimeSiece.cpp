#include <bits/stdc++.h>
using namespace std;

// Seive method for print prime numbers between 2 to n

void SieveMethod(int n)
{

    bool prime[n + 1];

    for (int i = 0; i <= n; i++)
    {
        prime[i] = true;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

// udated version of Seeve method it's reduce the space of the array

void SieveMethod2(int n){

    //by creating a root n size array
    int k = sqrt(n);
    bool prime[k+1];

    
}

int main()
{

    int n = 50;

    // printPrime(n);
    SieveMethod2(n);

    return 0;
}