//Check whether any permutation of array is divisble by 60

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> PrintPrimes(int A)
{
    vector<int> res;
    if (A > 2)
        res.push_back(2);

    for (int i = 3; i <= A; i++)
    {
        bool flag = true;
        int test = sqrt(i);
        for(int j = 2; j <= test; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            res.push_back(i);
        }
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    v = PrintPrimes(n);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}