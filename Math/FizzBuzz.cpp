#include <iostream>
#include <vector>

using namespace std;

vector<string> FizzBuzz(int n)
{
    vector<string> v;

    for(int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            v.push_back("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            v.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            v.push_back("Buzz");
        }
        else{
            v.push_back(to_string(i));
        }
    }

    return v;
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    vector<string> v = FizzBuzz(n);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}