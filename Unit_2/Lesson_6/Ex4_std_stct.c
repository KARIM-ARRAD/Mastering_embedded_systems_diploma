#include <stdio.h>

struct SStudent
{
	char name[30];
	int roll;
	int mark;
};

int main()
{
	struct SStudent S[10];
	int i;

	printf("Enter information of students :\n");
	
	for(i=0; i<2; ++i)
	{
		S[i].roll = i+1;
		printf("for roll number %d\n",S[i].roll);
		printf("Enter name : ");
		scanf("%s",S[i].name);
		printf("Enter marks : ");
		scanf("%d",&S[i].mark);
		printf("\n");
	}

	printf(".\n.\n.\nDisplaying information of students:\n");

	for(i=0; i<2; ++i)
	{
		printf("Information for roll number %d\n",i+1);
		printf("Name : %s\n",S[i].name);
		printf("Mark : %d\n",S[i].mark);
	}

	printf(".\n.\n.\n");

	return 0;
}
