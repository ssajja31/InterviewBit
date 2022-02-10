string Solution::solve(string A) {
    map<char, int> m;
    map<char, int> :: iterator it;

    string res;

    for(int i = 0; i < A.size(); i++)
    {
        m[A[i]]++;
    }

    for(int i = 0; i < A.size(); i++)
    {
        if (m[A[i]] != 0)
        {
            res += A[i] + to_string(m[A[i]]);
            m[A[i]] = 0;
        }
    }

    return res;
}
