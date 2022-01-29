//Given a number N, find all factors of N.

//Example:

//N = 6 
//factors = {1, 2, 3, 6}
//Make sure the returned array is sorted.

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> FindFactors(int A)
{
    vector<int> res;
    vector<int> temp;

    int n = sqrt(A);

    for(int i = 1; i <= n; i++)
    {
        if (A % i == 0)
        {
            res.push_back(i);
            if (A/i != i)
            {
                temp.push_back(A/i);
            }
        }
    }

    for(int i = temp.size() - 1; i >= 0; i--)
    {
        res.push_back(temp[i]);
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    v = FindFactors(n);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}