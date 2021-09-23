#include <iostream>
#include <vector>

using namespace std;

int MinMax(vector<int> &v)
{
    int min = v[0];
    int max = v[0];

    for(int i = 0; i < v.size(); i++)
    {
        if (max < v[i])
            max = v[i];
        if (min > v[i])
            min = v[i];
    }

    return min + max;
}

int main()
{
    int n;
    cout << "Enter the size of vector" << endl;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << MinMax(v) << endl;

}