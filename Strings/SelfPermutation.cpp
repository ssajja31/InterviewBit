int Solution::permuteStrings(string A, string B) {
    if (A.size() != B.size())
    {
        return 0;
    }

    map<char, int> m;
    map<char, int> :: iterator it;

    for(int i = 0; i < A.size(); i++)
    {
        m[A[i]]++;
    }

    for(int i = 0; i < B.size(); i++)
    {
        m[B[i]]--;
    }

    for(it = m.begin(); it != m.end(); it++)
    {
        if (it->second != 0)
        {
            return 0;
        }
    }

    return 1;
}
