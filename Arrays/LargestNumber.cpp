bool sortComparator(string a, string b)
{
    string ab = a + b;
    string ba = b + a;

    return ab.compare(ba) > 0 ? true : false;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> res;
    string ans;
    int count = 0;

    for(int i = 0; i < A.size(); i++)
    {
        if (A[i] == 0)
        {
            ++count;
        }

        res.push_back(to_string(A[i]));
    }

    if (count == A.size()) return "0";

    sort(res.begin(), res.end(), sortComparator);

    for(int i = 0; i < res.size(); i++)
    {
        ans += res[i];
    }

    return ans;
}
