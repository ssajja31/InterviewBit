int Solution::solve(vector<int> &A, int B) {
    for(int i = 1; i < A.size() - 1; i++)
    {
        int temp = abs(A[i] - A[i+1]);

        if (temp % B != 0)
        {
            return 0;
        }
    }

    return 1;
}
