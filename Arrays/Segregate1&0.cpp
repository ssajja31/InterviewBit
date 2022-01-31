vector<int> Solution::solve(vector<int> &A) {
    int i = 0;
    int j = A.size() - 1;

    while (i <= j)
    {
        while (A[i] == 0)
        {
            i++;
        }
        while (A[j] == 1)
        {
            j--;
        }
        
        if ( i < j && A[i] == 1 && A[j] == 0)
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;

            i++;
            j--;
        }
    }

    return A;
}
