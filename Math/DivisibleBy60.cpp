//Check whether any permutation of array is divisble by 60

#include <iostream>
#include <vector>

using namespace std;

bool DivisibleBy60(vector<int> A)
{
    int flag1 = 0;
    int flag2 = 0;

    int sum = 0;
    for(int i = 0; i < A.size(); i++)
    {
        sum += A[i];

        if(A[i] == 0)
        {
            flag1 = 1;
        }

        if(A[i] >= 2 && A[i] % 2 == 0)
        {
            flag2 = 1;
        }
    }

    if(sum % 3 == 0 && flag1 && flag2)
    {
        return 1;
    }

    if (A.size() == 1 && A[0] == 0)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << DivisibleBy60(v) << endl;
}