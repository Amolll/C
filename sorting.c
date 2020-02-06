#include <stdio.h>
void main()
{
	int n=5, arr[10], i, j, a;
	printf("how many no you want to insert: ");
	scanf("%d", &n);

	printf("enter the no:\n");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
	printf("Sorrted Array is\n");
	for (i = 0; i < n; i++)
	{

		printf("%d\n", arr[i]);
	}
}
