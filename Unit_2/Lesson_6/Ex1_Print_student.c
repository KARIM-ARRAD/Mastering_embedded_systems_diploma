#include <stdio.h>

struct SStudent
{
	char  m_name[30];
	int   m_roll;
	float m_mark;
};

struct SStudent ReadData()
{
	struct SStudent C;
	printf("Enter your name : ");
	scanf("%s",&C.m_name);
	printf("Enter your roll number : ");
	scanf("%d",&C.m_roll);
	printf("Enter your mark : " );
	scanf("%f",&C.m_mark);
	
	return C;
}

void printData(struct SStudent Data)
{
	printf("\nDisplaying Student Info\n");
	printf("Name : %s\nRoll : %d\nMarks : %0.2f\r\n", Data.m_name, Data.m_roll, Data.m_mark);
}

int main()
{
	struct SStudent A;
	A = ReadData();
	printData(A);

	return 0;
}

