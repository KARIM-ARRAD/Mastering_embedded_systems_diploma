#include<stdio.h>

int main()
{
	int arr[20];
	int Num, InNum, Loc, i;

	// Insert number of elements
	printf("Enter no of elements : ");
	scanf("%d", &Num);

	// Insert table elements
	for (i=0; i<Num; i++)
	{
		scanf("%d ", &arr[i]);
	}

	// Element to be inserted
	printf("Enter the element to be inserted : ");
	scanf("%d", &InNum);

	// Insert new element in table
	printf("Enter the location : ");
	scanf("%d", &Loc);
	if (Loc>0 && Loc<100)
	{
		for (i=Num; i>(Loc-1); i--)
		{
			arr[i] = arr[i+1];
		}
		arr[Loc-1] = InNum;

		// Print new elements in table
		for (i=0; i<(Num+1); i++)
		{
			printf("%d\t", arr[i]);
		}
	}
	else
		printf("Invalid Input.\n");
	return 0;
}
