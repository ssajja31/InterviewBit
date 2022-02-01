vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) {

    vector<int> res;

    int i = A.size() - 1;
    int j = B.size() - 1;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int temp = A[i] + B[j] + carry;

        res.push_back(temp % 10);
        carry = temp / 10;
        
        --i; --j;
    }

    while (i >= 0)
    {
        int temp = A[i] + carry;
        res.push_back(temp % 10);
        carry = temp/10;

        --i; --j;
    }

    while(j >= 0)
    {
        int temp = B[j] + carry;
        res.push_back(temp % 10);
        carry = temp/10;

        --i; --j;
    }

    if (carry != 0)
    {
        res.push_back(carry);
    }

    reverse(res.begin(), res.end());

    return res;
}