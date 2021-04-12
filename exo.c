int biggestOfThree(int a, int b, int c)
{
	a = a > b ? a : b;
	return a > c ? a : c;
}
int biggestOfFour(int a, int b, int c, int d)
{
	a = biggestOfThree(a, b, c);
	return a > d ? a : d;
}
int biggestOfFive(int a, int b, int c, int d, int e)
{
	a = biggestOfFour(a, b, c, d);
	return a > e ? a: e;
}
