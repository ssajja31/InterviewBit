#include <iostream>
#include <vector>

using namespace std;

vector<char> ExcelColumnTitle(int column)
{
    vector<char> v;

    while (column > 0)
    {
        int temp = column % 26;
        
        if (temp != 0)
        {
            v.push_back(temp + 64);
            column = column / 26;
        }
        else
        {
            v.push_back('Z');
            column = column / 26 - 1;
        } 
    }
    return v;
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    vector<char> v = ExcelColumnTitle(n);

    for(int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }

    cout << endl;

    return 0;
}