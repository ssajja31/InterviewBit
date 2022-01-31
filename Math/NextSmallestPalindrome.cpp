string addCarry(string A)
{
    int carry = 1;
    for(int i = A.size() - 1; i >=0; i--)
    {
        int temp = int(A[i]) - '0' + carry;
        int next = (temp % 10 ) + 48;
        char c = (char)next;
        A[i] = c;
        carry = temp / 10;
    }

    if (carry != 0)
    {
        int next = carry + 48;
        char c = (char)next;
        A.insert(A.begin(), c);
    }
    return A;
}

bool greaterThan(string A, string B)
{
    int a = stoi(A);
    int b = stoi(B);

    return a > b;
}

string Solution::solve(string A) {
    string res;

    int i;
    for(i = 0; i < A.size(); i++)
    {
        if (A[i] != '9')
        {   
            break;
        }
    }
    if (i == A.size())
    {
        res = "1";
        for(int j = 0; j < A.size() - 1; j++)
        {
            res += "0";
        }

        res += "1";

        return res;
    }

    if (A.size() % 2 == 0)
    {
        string s1 = A.substr(0, A.size()/2);
        string s2 = A.substr(A.size()/2, A.size()/2);

        res = s1;
        reverse(s1.begin(), s1.end());
        
        if (s1 > s2)
        {
            res += s1;
        }
        else
        {
            s1 = addCarry(res);
            res = s1;
            reverse(s1.begin(), s1.end());
            res += s1;
        }
    }
    else
    {
        string s1 = A.substr(0, A.size()/2);
        string s2 = A.substr(A.size()/2 + 1, A.size()/2);
        string s = A.substr(0, A.size()/2 + 1);

        res = s;
        reverse(s1.begin(), s1.end());
        
        if (s1 > s2)
        {
            res += s1;
        }
        else
        {
            s1 = addCarry(res);
            res = s1;
            s1.erase(s1.begin() + s1.size() -1);
            reverse(s1.begin(), s1.end());
            res += s1;
        }
    }

    return res;
}
