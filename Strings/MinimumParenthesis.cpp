int Solution::solve(string A) {
   
    int result = 0;
    int count = 0;  

    for(int i = 0; i < A.size(); i++)
    {
        if (A[i] == '(')
        {
            count++;
        }
        else
        {
            if (count > 0)
            {
                count--;
            }
            else
            {
                result++;
            }
        }
    }

    return result + count;
}