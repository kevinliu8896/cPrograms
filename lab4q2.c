#include <stdio.h>
#define MAX_SIZE 100

float selection(float arr[], int i, int j, float n, float flag)
{
    int temp;

    if (i < n - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < n)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            selection(arr, i, j + 1, n, 0);
        }
        selection(arr, i + 1, 0, n, 1);
    }
}


int main()
{
    float arr[MAX_SIZE];
    float n;

    printf("Enter the size of the array: \n");
    scanf("%f", &n);
    printf("Enter the elements in arr:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    selection(arr, 0, 0, n, 1);
    printf("The sorted arr in ascending order is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%f  ", arr[i]);
    }

    return 0;
}
