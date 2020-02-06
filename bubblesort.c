#include <stdio.h>
void main()
{
	int arr[100];
	int i, j,n,temp;

    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);
	 for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
	 for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }
	printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d   ", arr[i]);
    }
}
