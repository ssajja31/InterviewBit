#include <iostream>

using namespace std;

bool palindromeInteger(int n)
{
    if (n < 0)
        return false;
    
    int temp = n;
    int reverse = 0;

    while (temp > 0)
    {
        if (reverse > INT_MAX/10 || (reverse == INT_MAX/10 && temp%10 > INT_MAX%10))
            return false;

        reverse = (temp%10) + (reverse*10);
        temp = temp/10;
    }

    return n == reverse;
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << palindromeInteger(n) << endl;
}