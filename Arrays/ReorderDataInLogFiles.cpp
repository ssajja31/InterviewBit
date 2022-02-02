class compare {
public:
    // Comparator function
    bool operator()(string a, string b)
    {
        int index1 = a.find("-");
        int index2 = b.find("-");

        string log1 = a.substr(index1);
        string log2 = b.substr(index2);

        string id1 = a.substr(0, index1);
        string id2 = b.substr(0, index2);

        if (log1.compare(log2) == 0) {
            return id1.compare(id2) < 0 ? true : false;
        }
        return log1.compare(log2) < 0 ? true : false;
    }
};

bool hasDigit(string A)
{
    for(int i = 0; i < A.size(); i++)
    {
        if (A[i] >= 48 && A[i] <= 57)
        {
            return true;
        }
    }

    return false;
}

vector<string> Solution::reorderLogs(vector<string> &A) {

    vector<string> res;
    compare cmp;

    for(int i = 0; i < A.size(); i++)
    {
        int index = A[i].find("-");

        string log = A[i].substr(index);

        if (!hasDigit(log))
        {
            res.push_back(A[i]);
        }
    }

    sort(res.begin(), res.end(), cmp);

    for(int i = 0; i < A.size(); i++)
    {
        int index = A[i].find("-");

        string log = A[i].substr(index);

        if (hasDigit(log))
        {
            res.push_back(A[i]);
        }
    }

    return res;
}
