string Solution::solve(string A, string B) {
    vector<int> v(10, 0);
    int bulls = 0;
    int cows = 0;
    string result;

    for(int i = 0; i < A.size(); i++)
    {
        v[A[i] - '0']++;
    }

    for(int i = 0; i < A.size(); i++)
    {
        if (A[i] == B[i])
        {
            bulls++;
        }
    }

    for(int i = 0; i < B.size(); i++)
    {  
        if (v[B[i] - '0'] > 0)
        {
            cows++;
            v[B[i] - '0']--;
        }
    }

    result = to_string(bulls) + "A" + to_string(cows - bulls) + "B";

    return result;
}
