int Solution::maxSubArray(const vector<int> &A) {
    int currentSum = A[0];
    int maxSum = currentSum;

    for(int i = 1; i < A.size(); i++)
    {
        int temp = currentSum + A[i];

        if (temp >= A[i])
        {
            currentSum = temp;
        }
        else
        {
            currentSum = A[i];
        }

        if (maxSum < currentSum)
        {
            maxSum = currentSum;
        }
    }

    return maxSum;
}
