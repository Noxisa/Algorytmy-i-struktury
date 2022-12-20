/*
Tomas Chmelevski. Student
* -----------------
* Sortowanie.
* -----------------
2022-12-13
*/




Kod wymian
````
#include <math.h>
#include <stdio.h>
 
	void selectionSort( int arr[], int size );

int main(void)
{
    int array[5], i, j, lowIndex,n,swap;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter %d numbers : ",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i = 0; i < (n -1); i++)
    {
        for (j=(i + 1); j < n; j++)
        {
            if(array[i] > array[j])
            {
                lowIndex = j;
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }
    printf("Sorted array is : ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ",array[i]);
    }
    return 0;
}
````
