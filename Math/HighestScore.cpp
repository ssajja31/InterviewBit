int Solution::highestScore(vector<vector<string> > &A) {
    
    map<string, pair<int, int>> m;
    map<string, pair<int, int>>:: iterator it;
    int maxSum = 0;
    int tempSum = 0;

    for(int i = 0; i < A.size(); i++)
    {
        m[A[i][0]].first += stoi(A[i][1]);
        m[A[i][0]].second += 1;
    }

    for(it = m.begin(); it != m.end(); ++it)
    {
        tempSum = it->second.first/it->second.second;

        if (maxSum < tempSum)
        {
            maxSum = tempSum;
        }
    }

    return maxSum;
}
