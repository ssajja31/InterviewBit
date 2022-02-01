vector<int> Solution::findOccurences(vector<int> &A) {
    vector<int> res;
    
    map<int, int> m;
    map<int, int> :: iterator it;

    for(int i = 0; i < A.size(); i++)
    {
        m[A[i]]++;
    }

    for(it = m.begin(); it != m.end(); it++)
    {
        res.push_back(it->second); 
    }
    return res;
}
