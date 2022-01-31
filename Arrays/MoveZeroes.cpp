vector<int> Solution::solve(vector<int> &A) {
    int first = 0;
    int second = 0;

    for(second = 0; second < A.size(); second++)
    {
        if (first <= second && A[second] != 0)
        {
            int temp = A[first];
            A[first] = A[second];
            A[second] = temp;

            first++;
        }
    }

    return A;
}
