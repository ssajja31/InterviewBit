string returnCommonPrefix(string a, string b)
{
    string result;
    int n = min(a.size(), b.size());

    for(int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            break;
        }
        result += a[i];
    }
    return result;
}

string commonPrefix(vector<string> &A, int low, int high)
{
    if (low == high)
    {
        return A[low];
    }

    if (high > low)
    {
        int mid = (low + high)/2;
        string str1 = commonPrefix(A, low, mid);
        string str2 = commonPrefix(A, mid + 1, high);

        return returnCommonPrefix(str1, str2);
    }
}

string prefix(vector<string> &A)
{
    string result = A[0];
    for(int i = 1; i < A.size(); i++)
    {
        result = returnCommonPrefix(result, A[i]);
    }

    return result;
}
string Solution::longestCommonPrefix(vector<string> &A) {
    
    //return commonPrefix(A, 0, A.size() - 1);

    return prefix(A);
}
