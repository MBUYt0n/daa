#include <stdio.h>
#include <limits.h>

void findDifference(int arr[], int size)
{
    //O(n^2)
    // int min;
    // for (int i = 0; i < size - 1; i++)
    // {
    //     min = i;
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (arr[j] < arr[min])
    //             min = j;
    //     }

    //     if (min != i)
    //     {
    //         int temp = arr[min];
    //         arr[min] = arr[i];
    //         arr[i] = temp;
    //     }
    // }

    //O(n)

    int min = INT_MAX, secondMin = INT_MAX, max = INT_MIN, secondMax = INT_MIN;
    for(int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
            secondMax = arr[i];

        if (arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
        else if (arr[i] < secondMin && arr[i] != min)
            secondMin = arr[i];
    }

    printf("%d", secondMax - secondMin);
}

int main()
{
    int size;

    // printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    findDifference(arr, size);

    return 0;
}