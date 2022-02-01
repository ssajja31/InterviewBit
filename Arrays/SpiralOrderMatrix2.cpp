vector<vector<int> > Solution::generateMatrix(int A) {

    vector<vector<int>> res(A, vector<int> (A));
    int rowStart = 0;
    int colEnd = A - 1;
    int rowEnd = A - 1;
    int colStart = 0;

    int a = 0;

    while (a <= A * A && rowStart <= rowEnd && colStart <= colEnd) 
    {
        for (int i = colStart; i <= colEnd; i++)
        {
            res[rowStart][i] = ++a;
        }
        rowStart++;

        for(int i = rowStart; i <= rowEnd; i++)
        {
            res[i][colEnd] = ++a;
        }
        colEnd--;
        
        if (rowEnd >= rowStart)
        {
            for(int i = colEnd; i >= colStart; i--)
            {
                res[rowEnd][i] = ++a;
            }
        }
        rowEnd--;
       
       if (colEnd >= colStart)
       {
            for(int i = rowEnd; i >= rowStart; i--)
            {
                res[i][colStart] = ++a;
            }
       }
        colStart++;
    }

    return res;
}
