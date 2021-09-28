#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> SortWithSquares(vector<int> v)
{
    vector<int> res;

    int i = 0; 
    int j = v.size() - 1;

    while(i <= j && i < v.size() - 1 && j >= 0)
    {
        if (v[i] * v[i] > v[j] * v[j])
        {
            res.push_back(v[i] * v[i]);
            i++;
        }
        else
        {
            res.push_back(v[j] * v[j]);
            j--;
        }
    }

    reverse(res.begin(), res.end());

    return res;
}

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;

    cout << "Enter the elements of the vector" << endl;
    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> res = SortWithSquares(v);

    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    cout << endl;
    return 0;
}