string Solution::solve(string A) {

    string result = "";
    for(int i = A.size() - 1; i >= 0; i--)
    {
        string temp = "";
        while (i >= 0 && A[i] == ' ')
        {
            i--;
        }

        while ( i >=0 && A[i] != ' ')
        {
            temp += A[i];
            i--;
        }

        reverse(temp.begin(), temp.end());

        temp = temp + " ";
        result += temp;
    }

    for(int i = result.size() - 1; i >=0; i--)
    {
        if (result[i] == ' ')
        {
            result.pop_back();
        }
        else
        {
            break;
        }
    }

    for(int i = 0; i < result.size(); i++)
    {
        if (result[i] == ' ')
        {
            result.pop_back();
        }
        else
        {
            break;
        }
    }

    return result;
}
