#include <iostream>

using namespace std;

int Distribute(int a, int b, int c) //a items, b places, position - c
{
    int position = a % b;
    int exactPos = (position + c - 1) % b;

    if (exactPos == 0)
        return b;
    return exactPos;
}

int main()
{
    int a, b, c;
    cout << "Enter a, b, c" << endl;
    cin >> a >> b >> c;

    cout << Distribute(a, b, c) << endl;
    return 0;
}