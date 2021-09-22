#include <iostream>

using namespace std;

bool IsRectangle(int a, int b, int c, int d)
{
    if (a == b)
        return c == d;
    else if (a == c)
        return  b== d;
    else if (a == d)
        return b == c;
    else    
        return false;
}

int main()
{
    int a, b, c, d;
    cout << "Enter the 4 sides of a rectangle";
    cin >> a >> b >> c >> d;

    cout << IsRectangle(a, b, c, d) << endl;
}