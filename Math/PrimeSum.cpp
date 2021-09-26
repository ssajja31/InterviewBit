#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool IsPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

vector<int> PrimeSum(int n)
{
    vector<int> v;

    for(int i = 2; i <= n/2; i++)
    {
        if (IsPrime(i) && IsPrime(n - i))
        {
            v.push_back(i);
            v.push_back(n - i);
            break;
        } 
    }
    return v;
}

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    vector<int> v = PrimeSum(n);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}