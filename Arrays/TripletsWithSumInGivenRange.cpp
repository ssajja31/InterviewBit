bool isA(double n)
{
    return n < 2.0/3.0;
}

bool isB(double n)
{
    return (n >= 2.0/3.0 && n <= 1.0);
}

bool isC(double n)
{
    return (n > 1.0 && n < 2.0);
}

int Solution::solve(vector<string> &A) {
    if (A.size() < 3)
    {
        return 0;
    }

    vector<double> res;
    for(int i = 0; i < A.size(); i++)
    {
        res.push_back(stod(A[i]));
    }

    double maxa1 = INT_MIN, maxa2 = INT_MIN, maxa3 = INT_MIN, maxb1 = INT_MIN;
    double mina1 = INT_MAX, mina2 = INT_MAX, minc1 = INT_MAX, minb1 = INT_MAX, minb2 = INT_MAX;

    for(int i= 0; i < res.size(); i++)
    {
        if (isA(res[i]) && maxa1 < res[i])
        {
            maxa3 = maxa2;
            maxa2 = maxa1;
            maxa1 = res[i];
        }
        else if (isA(res[i]) && maxa2 < res[i])
        {
            maxa3 = maxa2;
            maxa2 = res[i];
        }
        else if (isA(res[i]) && maxa3 < res[i])
        {
            maxa3 = res[i];
        }
        else if (isB(res[i]) && maxb1 < res[i])
        {
            maxb1 = res[i];
        }
    }
    for(int i = 0; i < A.size(); i++)
    {
        if (isA(res[i]) && mina1 > res[i])
        {
            mina2 = mina1;
            mina1 = res[i];
        }
        else if (isA(res[i]) && mina2 > res[i])
        {
            mina2 = res[i];
        }
        else if (isB(res[i]) && minb1 > res[i])
        {
            minb2 = minb1;
            minb1 = res[i];
        }
        else if (isB(res[i]) && minb2 > res[i])
        {
            minb2 = res[i];
        }
        else if (isC(res[i]) && minc1 > res[i])
        {
            minc1 = res[i];
        }
    }

    if (maxa1 + maxa2 + maxa3 > 1) return 1;
    if (maxa1 + maxa2 + maxb1 > 1 && maxa1 + maxa2 + maxb1 < 2) return 1;
    if (mina1 + mina2 + minb1 > 1 && mina1 + mina2 + minb1 < 2) return 1;
    if (mina1 + mina2 + minc1 < 2) return 1;
    if (mina1 + minb1 + minb2 > 1 && mina1 + minb1 + minb2 < 2) return 1;
    if (mina1 + minb1 + minc1 < 2) return 1;
    
    return 0;
}
