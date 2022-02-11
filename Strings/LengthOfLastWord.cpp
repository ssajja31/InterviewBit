int Solution::lengthOfLastWord(const string A) {
    int count = 0;
    int i;
    for(i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] == ' ')
        {
            if (count != 0)
                return count;
        }
        else
        {
            count++;
        }
    }

    if (i < 0)
    {
        return count;
    }

    return 0;
}
