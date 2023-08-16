#include <bits/stdc++.h>
using namespace std;
void printArr(vector<int> &arr, int s, int e);

void printAllSubArr(vector<int> &arr)
{

    int oddCount = 0;
    int sum = 0;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
                // sum += arr[j];
                if(arr[j]%2 != 0 || arr[j] == 1)
                {
                    oddCount++;
                }  
                else if(oddCount == 3)
                {
                    oddCount = 0;
                    break;
                }

        }

        // oddCount = 0;

    }

    cout << oddCount << endl;
}

void printArr(vector<int> &arr, int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void changeEven(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] = 0;
        }
    }
}


int maxSubArray(vector<int> &arr)
{
    int size = arr.size();
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for(int j = i; j < size; j++)
        {
            sum = 0;
            for(int k = i; k <= j; k++)
            {
                sum += arr[k];
                maxSum = max(maxSum, sum);
            }
        }
        
    }
    return maxSum;
}

int main()
{

    // vector<int> arr = {1, 1, 2, 1, 1};
    // changeEven(arr);

    // printAllSubArr(arr);
    
    vector<int> arr1 = {-2,-3,4,-1,-2,1,5,-3};
    int ans = maxSubArray(arr1);

    cout << ans << endl;

    return 0;
}