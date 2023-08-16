#include <bits/stdc++.h>
using namespace std;

// Brute Force
int findMissingNumber(vector<int> &v)
{
    int n = v.size();
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return -1;
}

// Better Approach
int findMissingNumber2(vector<int> &v)
{
    int n = v.size();
    int hash[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        hash[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        hash[v[i]] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }

    return -1;
}

// Optimal Approach
int findMissingNumber3(vector<int> &v)
{
    int n = v.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    int total = (n ) * (n + 1) / 2;
    return total - sum;
}

// XOR Approach
int findMissingNumber4(vector<int> &v)
{
    int n = v.size();
    int x1 =0;
    int x2 = 0;

    // for (int i = 1; i <= n ; i++){
    //     x1 = x1 ^ i;
    // }
    
    // 1 2 4 5 
    for (int i = 0; i < n-1; i++){
        x2 = x2 ^ v[i];
        x1 = x1 ^ (i+1);
    }
    x1 = x1 ^ (n);

    return x1 ^ x2;
}


int main()
{
    vector<int> v = {1, 2, 3, 6, 7, 4, 5, 9};
    cout << findMissingNumber4(v) << endl;

    return 0;
}