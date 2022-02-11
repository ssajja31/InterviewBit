vector<string> Solution::deserialize(string A) {
    vector<string> res;
    int start = 0;
    int count = 0;

    for(int i = 0; i < A.size() - 1; i++)
    {
        if (A[i] >= 49 && A[i] <= 57)
        {  
            res.push_back(A.substr(start, count));

            while(A[i] != '~')
            {
                i++;
            }
            count = 0;
            start = i + 1;
        }
        else if (A[i] != '~')
        {
            count++;
        }
    }

    return res;
}
