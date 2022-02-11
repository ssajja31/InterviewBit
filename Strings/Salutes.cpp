long Solution::countSalutes(string A) {
    long res = 0;
    long count = 0;

    for(int i = 0; i < A.size(); i++)
    {
        if (A[i] == '<')
        {
            count++;
        }
    }

    for(int i = 0; i < A.size(); i++)
    {
        if (A[i] == '>')
        {
            res += count;
        }
        else
        {
            count--;
        }
    }

    return res;
}