vector<int> Solution::nextPermutation(vector<int> &A) {
    int temp = -1;
    int k = 0;

    for(int i = A.size() - 1; i > 0; i--)
    {
        if (A[i] > A[i-1])
        {
            temp = i - 1;
            break;
        }
    }

    if (temp != -1)
    {
        for(int i = A.size() - 1; i > temp; i--)
        {
            if (A[i] > A[temp])
            {
                int j = A[i];
                A[i] = A[temp];
                A[temp] = j;

                k = temp + 1;
                break;
            }
        }
    }

    sort(A.begin() + k, A.end());

    return A;
}
