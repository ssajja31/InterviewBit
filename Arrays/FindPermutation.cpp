vector<int> Solution::findPerm(const string A, int B) {
    int start = 1;
    int end = 0;
    vector<int> res;

    for(int i = 0; i < A.size(); i++)
    {
        end++;
        if (A[i] == 'I')
        {
            for(int j = end; j >= start; j--)
            {
                res.push_back(j);
            }
            start = end + 1;
        }
    }

    end++;

    for(int i = end; i >= start; i--)
    {
        res.push_back(i);
    }

    return res;
}
