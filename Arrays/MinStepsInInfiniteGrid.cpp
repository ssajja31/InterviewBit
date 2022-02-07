int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count = 0;

    for(int i = 1; i < A.size(); i++)
    {
        int x = abs(A[i] - A[i-1]);
        int y = abs(B[i] - B[i-1]);

        count += max(x, y);
    }

    return count;
}
