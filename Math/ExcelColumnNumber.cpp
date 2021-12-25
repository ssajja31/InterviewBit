#include <iostream>
#include <vector>

using namespace std;

int ExcelColumnNumber(string title)
{
    int number = title[title.size()-1] - 'A' + 1;
    int result = 1;

    for(int i = title.size() - 2; i >= 0; i--)
    {
        result *= 26;

        number += result * (title[i] - 'A' + 1);
    }

    return number;
}

int main()
{
    string n;
    cout << "Enter the string" << endl;
    cin >> n;

    int number = ExcelColumnNumber(n);

    cout << number << endl;

    return 0;
}