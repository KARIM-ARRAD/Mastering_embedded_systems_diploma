#include <stdio.h>

struct Scomplx
{
	float m_R;
	float m_I;
};

struct Scomplx ReadNumbers(char str[])
{
    struct Scomplx C;
    printf("%s\n",str);
	printf("Enter real and imaginary respectively : ");
	scanf("%f%f",&C.m_R, &C.m_I);

	return C;
}

struct Scomplx AddNumbers(struct Scomplx A , struct Scomplx B)
{
	struct Scomplx S;
	S.m_R = A.m_R + B.m_R;
	S.m_I = A.m_I + B.m_I;

	return S;
}

void printSum(struct Scomplx S)
{
	printf("Sum = %0.1f + %0.1fi",S.m_R , S.m_I);
}

int main()
{
	struct Scomplx X,Y,Sum;
	X = ReadNumbers("For 1st complex number");
	Y = ReadNumbers("For 2st complex number");
	Sum = AddNumbers(X , Y);
	printSum(Sum);

	return 0;
}
