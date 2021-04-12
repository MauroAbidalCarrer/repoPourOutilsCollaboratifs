#include<stdio.h>
#include<stdlib.h>
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

int main(int ac, char** av)
{
	if(ac != 6)
	{
		printf("enter 5 args pls\n");
		return 0;
	}
	int a = atoi(av[1]);
printf("a=%d\n", a);
	int b = atoi(av[2]);
printf("a=%d\n", a);
	int c = atoi(av[3]);
printf("a=%d\n", a);
	int d = atoi(av[4]);
printf("a=%d\n", a);
	int e = atoi(av[5]);
printf("a=%d\n", a);

	printf("biggest of first three = %d\n", biggestOfThree(a, b, c));
	printf("biggest of first four  = %d\n", biggestOfFour(a, b, c, d));
	printf("biggest of first five  = %d\n", biggestOfFive(a, b, c, d, e));

	printf("second biggest of first three = %d\n", secondBiggsetOfThree(a, b, c));
	printf("second biggest of first three = %d\n", secondBiggestOfFour(a, b, c, d));
	printf("second biggest of first three = %d\n", secondBiggestOfFive(a, b, c, d, e));
}
