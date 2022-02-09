vector<vector<int> > Solution::prettyPrint(int A) {
    int n = A + A - 1;
    vector<vector<int>> res(n, vector<int> (n, 0));

    int i = 0;
    int j = 0;
    int k = n;
    int l = n;

    while (i < k && j < l)
    {
        for(int a = j; a < l; a++)
        {
            res[i][a] = A;
        }

        for(int a = i; a < k; a++)
        {
            res[a][l-1] = A;
        }
        l--;
 
        if (j < l)
        {
            for(int a = k - 1; a >= i; a--)
            {
                res[k-1][a] = A;
            }
             k--;
        }
        
        if(i < k)
        {
            for(int a = l - 1; a >= j; a--)
            {
                res[a][j] = A;
            }
            j++;
        }
        i++;

        A--;
    }

    return res;

}

