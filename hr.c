// // // // #include <stdio.h>
// // // // #include <stdlib.h>
// // // // #include <limits.h>
// // // // int main()
// // // // {
// // // //     int a[] = {INT_MAX, INT_MAX};
// // // //     for (int i = 0; i < 2; i++)
// // // //     {
// // // //         a[i] *=0.21;
// // // //     }
// // // //     for(int i = 0; i < 2; i++)
// // // //     {
// // // //         printf("%d\n", a[i]);
// // // //     }
// // // // }

// // // #include <stdio.h>
// // // #include <stdlib.h>

// // // int *gradingStudents(int grades_count, int *grades, int *result_count)
// // // {
// // //     int *a = (int *)malloc(sizeof(int) * grades_count);
// // //     for (int i = 0; i < grades_count; i++)
// // //     {
// // //         if (grades[i] >= 38)
// // //         {
// // //             int x = grades[i] / 5;
// // //             x = (x + 1) * 5;
// // //             if (grades[i] - x <= 2)
// // //                 a[i] = x;
// // //             else
// // //             {
// // //                 a[i] = grades[i];
// // //             }
// // //         }
// // //         else
// // //         {
// // //             a[i] = grades[i];
// // //         }
// // //     }

// // //     return a;
// // // }

// // // int main()
// // // {
// // //     int x[] = {73, 67, 38, 33};
// // //     int *result_count;
// // //     int *a = gradingStudents(4, x, result_count);
// // //     for (int i = 0; i < 4; i++)
// // //     {
// // //         printf("%d\n", a[i]);
// // //     }
// // // }

// // #include<stdio.h>
// // #include<stdlib.h>

// // int queensAttack(int n, int k, int r_q, int c_q, int obstacles_rows, int obstacles_columns, int **obstacles)
// // {
// //     int moves = (n - 1) * 2;
// //     for(int i = 0; i < obstacles_rows; i++)
// //     {
// //         for(int j = 0; j < 2; j++)
// //         {
// //             if (j == 0 && obstacles[i][j] == r_q)
// //             {
// //                 if (obstacles[i][j+1] > c_q)
// //                 {
// //                     printf("%d\n", obstacles[i][j+1]);
// //                     moves -= obstacles[i][j+1];
// //                 }
// //                 else
// //                 {
// //                     printf("%d\n", obstacles[i][j + 1]);
// //                     moves -= n - obstacles[i][j+1] + 1;
// //                 }
// //             }
// //             else if (j == 1 && obstacles[i][j] == c_q)
// //             {
// //                 if(obstacles[i][j-1] > r_q)
// //                 {
// //                     printf("%d\n", obstacles[i][j - 1]);
// //                     moves -= obstacles[i][j-1];
// //                 }
// //                 else
// //                 {
// //                     printf("%d\n", obstacles[i][j - 1]);
// //                     moves -= n - obstacles[i][j-1] + 1;
// //                 }
// //             }
// //         }
// //     }

// //     return moves;
// // }

// // int main()
// // {
// //     int rq = 4;
// //     int cq = 3;

// //     int **obstacles = (int **)malloc(3 * sizeof(int *));
// //     for (int i = 0; i < 3; i++)
// //     {
// //         obstacles[i] = (int *)malloc(2 * sizeof(int));
// //     }

// //     obstacles[0][0] = 5;
// //     obstacles[0][1] = 5;
// //     obstacles[1][0] = 4;
// //     obstacles[1][1] = 2;
// //     obstacles[2][0] = 2;
// //     obstacles[2][1] = 3;

// //     int n = 5;
// //     int k = 3;
// //     printf("%d\n", queensAttack(n, k, rq, cq, 3, 2, obstacles));
// // }
// #include <stdio.h>
// #include <stdlib.h>
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int *arr, int low, int high)
// {
//     int pivot = arr[high]; // Choosing the last element as the pivot
//     int i = (low - 1);     // Index of the smaller element

//     for (int j = low; j <= high - 1; j++)
//     {
//         // If the current element is smaller than the pivot
//         if (arr[j] < pivot)
//         {
//             i++; // Increment index of smaller element
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return (i + 1);
// }

// void quickSort(int *arr, int low, int high)
// {
//     if (low < high)
//     {
//         // pi is partitioning index, arr[pi] is now at right place
//         int pi = partition(arr, low, high);

//         // Separately sort elements before and after partition
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// void miniMaxSum(int arr_count, int *arr)
// {
//     quickSort(arr, 0, arr_count - 1);
//     long min = 0, max = 0;
//     for (int i = 0; i < 4; i++)
//         min += arr[i];
//     for (int i = arr_count - 1; i > arr_count - 4 - 1; i--)
//         max += arr[i];
//     printf("%ld %ld", min, max);
// }

// int main()
// {
//     int arr[] = {256741038,
//                  623958417,
//                  467905213,
//                  714532089,
//                  938071625};
//     miniMaxSum(5, arr);
// }


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// char *timeConversion(char *s)
// {
//     char *time = (char *)malloc(9 * sizeof(char));
//     if (s[8] == 'P')
//     {
//         if (s[0] == '1' && s[1] == '2')
//         {
//             time[0] = '1';
//             time[1] = '2';
//         }
//         else
//         {
//             time[0] = s[0] + 1;
//             time[1] = s[1] + 2;
//         }
//     }
//     else
//     {
//         if (s[0] == '1' && s[1] == '2')
//         {
//             time[0] = '0';
//             time[1] = '0';
//         }
//         else
//         {
//             time[0] = s[0];
//             time[1] = s[1];
//         }
//     }
//     for (int i = 2; i < 8; i++)
//     {
//         time[i] = s[i];
//     }
//     time[8] = '\0';
//     return time;
// }

// int *matchingStrings(int strings_count, char **strings, int queries_count, char **queries, int *result_count)
// {
//     int *a = (int *)malloc(queries_count * sizeof(int));
//     for (int i = 0; i < queries_count; i++)
//     {
//         a[i] = 0;
//         for (int j = 0; j < strings_count; j++)
//         {
//             if (strcmp(strings[j], queries[i]) == 0)
//             {
//                 a[i]++;
//             }
//         }
//     }

//     for(int i = 0; i < queries_count; i++)
//     {
//         printf("%d\n", a[i]);
//     }
//     return a;

// }

int lonelyinteger(int a_count, int *a)
{
    int n[a_count + 1];
    for (int i = 0; i < a_count; i++)
        n[i] = 0;
    for (int i = 0; i < a_count; i++)
    {
        n[a[i]]++;
    }
    for (int i = 0; i < a_count; i++)
    {
        if (n[i] == 1)
            return i;
    }
    printf("ere\n");
    return 0;
}

int main()
{
    int a[] = {1};
    printf("%d\n", lonelyinteger(1, a));
}