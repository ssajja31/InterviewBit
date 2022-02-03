int Solution::solve(vector<int> &A) {
    int count = 0;
    int ps1 = 0;
    int ss1 = 0;
    int ps2 = 0;
    int ss2 = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (i % 2 == 0)
        {
            ss1 += A[i];
        }
        else
        {
            ss2 += A[i];   
        }
    }

    for(int i = 0; i < A.size(); i++)
    {
        int temp;
        if (i % 2 == 0)
        {
            ss1 -= A[i];
        }
        else
        {
            ss2 -= A[i];
        }

        if (ss2 + ps1 == ss1 + ps2)
        {
            ++count;
        }

        if (i % 2 == 0)
        {
            ps1 += A[i];
        }
        else
        {
            ps2 += A[i];
        }
    }

    return count;
}
