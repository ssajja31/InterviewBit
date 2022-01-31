/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
int solve(int A, int B) {
    int topLeft = 0;
    int bottomRight = 0; 
    int bottomLeft = 0;
    int topRight = 0;

    int i = A; int j = B;
    while (--i >= 1 && --j >= 1)
    {
        topLeft++;
    }

    i = A; j = B;
    while (++i <= 8 && ++j <= 8)
    {
        bottomRight++;
    }

    i = A; j = B;
    while (++i <= 8 && --j >= 1)
    {
        bottomLeft++;
    }

    i = A;j = B;
    while (--i >= 1 && ++j <= 8)
    {
        topRight++;
    }

    return topLeft + bottomRight + bottomLeft + topRight;
}
