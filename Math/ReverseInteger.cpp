#include <iostream>

using namespace std;

int Reverse(int n)
{
    int temp = n < 0 ? n * (-1) : n;
    int reverse = 0;

    while(temp > 0)
    {
        if (reverse > INT_MAX/10 || (reverse == INT_MAX/10 && temp % 10 > INT_MAX % 10))
           return 0;
        reverse = (temp % 10) + (reverse * 10);
        temp = temp/10;
    }

    if(reverse > INT_MAX)
        return 0;
    
    return n > 0 ? reverse : reverse * (-1);
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << Reverse(n) << endl;

    return 0;
}