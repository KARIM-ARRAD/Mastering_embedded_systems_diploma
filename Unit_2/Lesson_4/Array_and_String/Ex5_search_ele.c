#include <stdio.h>

int main()
{
	int arr[100];
	int Num, InNum, i, Location=-1;

	// Print number of elements
	printf("Enter no of elements : ");
	scanf("%d", &Num);

	// Enter elemnts
	for (i=0; i<Num; i++)
	{
		scanf("%d", &arr[i]);
	}

	//Element to be searched
	printf("Enter the element to be searched : ");
	scanf("%d", &InNum);

	// Search of element
	for (i=0; i<Num; i++)
	{
		if (arr[i] == InNum)
		{
			Location = i;
			break;
		}
	}
	if (Location == -1)
		printf("Number NOT exist.\n");
	else
		printf("Number found at the location = %d\n", Location + 1);

	return 0;
}
