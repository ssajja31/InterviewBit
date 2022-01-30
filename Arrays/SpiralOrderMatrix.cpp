vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> res;

    int rowStart = 0;
    int colEnd = A[rowStart].size() - 1;
    int rowEnd = A.size() - 1;
    int colStart = 0;

    while (rowStart <= rowEnd && colStart <= colEnd) 
    {
        for (int i = colStart; i <= colEnd; i++)
        {
            res.push_back(A[rowStart][i]);
        }
        rowStart++;

        for(int i = rowStart; i <= rowEnd; i++)
        {
            res.push_back(A[i][colEnd]);
        }
        colEnd--;
        
        if (rowEnd >= rowStart)
        {
            for(int i = colEnd; i >= colStart; i--)
            {
                res.push_back(A[rowEnd][i]);
            }
        }
        rowEnd--;
       
       if (colEnd >= colStart)
       {
            for(int i = rowEnd; i >= rowStart; i--)
            {
                res.push_back(A[i][colStart]);
            }
       }
        colStart++;
    }

    return res;
}
