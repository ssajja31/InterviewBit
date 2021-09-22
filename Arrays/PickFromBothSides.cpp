#include <iostream>

using namespace std;

int SumFromBothEnds(int n, int arr[], int k)
{
    int sum = 0;
    int leftSum = 0;

    if (k > n)
    {
        return 0;
    }

    for(int i = 0; i < k; i++)
    {
        leftSum += arr[i];
    }

    sum = leftSum;
    int temp = k - 1;

    for(int i = n - 1; i >= n - k && temp >= 0; i--)
    {
        leftSum += arr[i] - arr[temp];
        temp--;

        if (leftSum >= sum)
        {
            sum = leftSum;
        }
    }

    return sum;
}

int main()
{
    int n, k;
    cout << "Enter the size of array and k" << endl;
    cin >> n;   
    cin >> k;

    cout << "Enter the array" << endl;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << SumFromBothEnds(n, arr, k) << endl;
}