#include <iostream>
#include <vector>

using namespace std;

vector<int> MaxNonNegativeSubArray(vector<int> &A)
{
    vector<int> res;

    int start = 0;
    int tempStart = 0;
    int end = 0;
    long maxSum = 0;
    long tempSum = 0;

    for(int i = 0; i < A.size(); i++)
    {
        if (A[i] < 0)
        {
            tempStart = i + 1;
            tempSum = 0;
        }
        else
        {
            tempSum += A[i];
        }

        if (tempSum > maxSum)
        {
            maxSum = tempSum;
            start = tempStart;
            end = i;
        }
        else if (tempSum == maxSum)
        {
            if (end - start < i - tempStart)
            {
                start = tempStart;
                end = i;
            }
            else if (end - start == i - tempStart && tempStart < start)
            {
                start = tempStart;
                end = i;
            }
        }
    }
    
    for(int i = start; i <= end; i++)
    {
        if (A[i] >= 0)
            res.push_back(A[i]);
    }

    return res;
}

int main()
{
    vector<int> v;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
     v = MaxNonNegativeSubArray(v);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}