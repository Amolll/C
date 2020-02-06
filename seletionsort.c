#include <stdio.h>
void main()
{
	int arr[5] = {43, 23, 65, 34, 2};
	int i, j, temp;

	printf("selection sort\n");
	for (i = 0; i <= 4; i++)
		printf("%d\n", arr[i]);

	for (i = 0; i <= 3; i++)
	{
		for (j = i + 1; j <= 4; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("sorted array\n");
	for (i = 0; i <= 4; i++)
		printf("%d\n", arr[i]);
}

