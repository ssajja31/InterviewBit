//ARRAY_BUG
//The following code is supposed to rotate the array A by B positions.

//So, for example,
//A : [1 2 3 4 5 6]
//B : 1
//The output :
//[2 3 4 5 6 1]
#include <iostream>
#include <vector>

using namespace std;

vector<int> RotateClockwise(vector<int> &v, int B)
{   
    vector<int> result;

    for(int i = 0; i < v.size(); i++)
    {
        result.push_back(v[(i + B) % v.size()]);
    }
    
    return result;
}

int main()
{
    vector<int> v;
    int n;
    int B;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cin >> B;
    v = RotateClockwise(v, B);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}
