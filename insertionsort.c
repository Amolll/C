#include <stdio.h>
void main()
{
	int arr[5] = {43, 23, 65, 34, 2};
	int i, j, temp, k;

	printf("insertion sort\n");
	for (i = 0; i <= 4; i++)
		printf("%d\n", arr[i]);

	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j < 1; j++)
		{
			if (arr[j] > arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				for (k = 1; k > j; k--)
					arr[k] = arr[k - 1];
					arr[k + 1] = temp;
			}
		}
	}
	printf("sorted array\n");
	for (i = 0; i <= 4; i++)
		printf("%d\n", arr[i]);
}
