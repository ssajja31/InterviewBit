vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> res;

    for(int i = 0; i < A; i++)
    {
        vector<int> temp;
        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                temp.push_back(1);
            }
            else
            {
                int value = res[i-1][j-1] + res[i-1][j];
                temp.push_back(value);
            }
        }

        res.push_back(temp);
    }

    return res;
}
