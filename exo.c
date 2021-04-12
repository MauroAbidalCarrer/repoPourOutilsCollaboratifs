int min(int a, int b)
{
    return a < b ? a : b;
}
int secondBiggsetOfThree(int a, int b, int c)
{
    a = a > b ? a : c;
    return min(a, b);
}
int secondBiggestOfFour(int a, int b, int c, int d)
{
    return min(biggestOfThree(a, b, c), d);
}
int secondBiggestOfFive(int a, int b, int c, int d, int e)
{
    return min(biggestOfFour(a, b, c, d), e);
}
