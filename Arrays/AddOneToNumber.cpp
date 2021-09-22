#include <iostream>
#include <vector>

using namespace std;

vector<int> AddOneToNumber(vector<int> &v)
{
    int n = v.size();
    cout << n << endl;
    int carry = 1;

    for(int i = n - 1; i >= 0; i--)
    {
        if (carry == 1)
        {
            int temp = carry;
            carry = (v[i] + carry) / 10;
            v[i] = (v[i] + temp) % 10; 
        }
    }

    if (carry != 0)
    {
        v.insert(v.begin(), carry);
    }

    while (v[0] == 0)
    {
        v.erase(v.begin());
    }

    return v;
}

int main()
{
    vector<int> v;
    int n;

    cout << "Enter the size of the vector" << endl;
    cin >> n;

    cout << "Enter the elements" << endl;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
     v = AddOneToNumber(v);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}