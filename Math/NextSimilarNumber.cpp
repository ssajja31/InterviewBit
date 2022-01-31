string Solution::solve(string A) {
    int n = A.size() - 1;
    int i = n;

    //Find the index from the right most end which doesn't obey the DESC order
    while(n >= 0 && A[n] <= A[n-1])
    {
        --n;
    }
    --n;

    if (n < 0)
    {
        return "-1";
    }

    //Find the index of the number which is greater than the current element to be swapped
    while (n < i && A[n] >= A[i])
    {
        --i;
    }

    int temp =  A[n];
    A[n] = A[i];
    A[i] = temp;

    //Sort the rest of the string after the swapped index
    sort(A.begin() + n + 1, A.end());

    return A;
}
