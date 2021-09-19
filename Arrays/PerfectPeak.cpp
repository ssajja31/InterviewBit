#include <iostream>

using namespace std;

int perfectPeak(int n, int arr[])
{
    int max = arr[0];
    int min = arr[n - 1];

    int maxArr[n];
    int minArr[n];

    maxArr[0] = arr[0];
    minArr[n-1] = arr[n-1];

    for(int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];

        maxArr[i] = max;
    }

    for(int i = n-2; i >= 0; i--)
    {
        if (min > arr[i])   
            min = arr[i];

        minArr[i] = min;
    }

    for(int i = 1; i < n-1; i++)
    {
        if (minArr[i] == arr[i] && maxArr[i] == arr[i])
            if (arr[i] > maxArr[i-1] && arr[i] < minArr[i+1])    //To handle Dupliates
            return 1;
    }

    return 0;
}

int main()
{
    int n;
    cout << "Enter Size of Array" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the Array" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << perfectPeak(n, arr) << endl;

    return 0;
}