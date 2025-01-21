#include <stdio.h>

struct SDistance
{
	int   feet;
	float inch;

}d1,d2,Sum;

int main()
{
	printf("Enter information for 1st distance\n");
	printf("Enter feet: ");
	scanf("%d",&d1.feet);
	printf("Enter inch: ");
	scanf("%f",&d1.inch);

	printf("\nEnter information for 2st distance\n");
	printf("Enter feet : ");
	scanf("%d",&d2.feet);
	printf("Enter inch : ");
	scanf("%f",&d2.inch);

	Sum.feet = d1.feet + d2.feet;
	Sum.inch = d1.inch + d2.inch;

	if(Sum.inch > 12.0)
	{
		Sum.inch = Sum.inch - 12.0;
		++Sum.feet;
	}
	printf("\nSum of distances = %d\'-%0.1f\"",Sum.feet ,Sum.inch);

	return 0;
}
