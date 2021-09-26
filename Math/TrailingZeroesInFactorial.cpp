#include <iostream>

using namespace std;

int TrailingZeroes(int n)
{
    int count = 0;

    for(int i = 5; i <= n; i *= 5)
    {
        count += n/i;
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << TrailingZeroes(n) << endl;

    return 0;
}