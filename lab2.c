// // #include <stdio.h>
// // #include <stdlib.h>

// // int elementNotInArray(int x[], int a[], int j, int iter)
// // {
// //     for (int k = 0; k < iter; k++)
// //     {
// //         if (a[j] == x[k])
// //             return 0;
// //     }
// //     return 1;
// // }

// // void recursiveHelper(int a[], int x[], int i, int n, int target, int iter)
// // {
// //     if (iter == i)
// //     {
// //         int sum = 0;
// //         for (int j = 0; j < i; j++)
// //         {
// //             sum += x[j];
// //         }
// //         if (sum == target)
// //         {
// //             for (int j = 0; j < i; j++)
// //             {
// //                 printf("%d", x[j]);
// //                 if (j != i - 1)
// //                     printf(",");
// //             }
// //             printf("\n");
// //         }
// //         return;
// //     }

// //     for (int j = iter; j < n && n - j >= i - iter; j++)
// //     {
// //         if (elementNotInArray(x, a, j, iter))
// //         {
// //             x[iter] = a[j];
// //             recursiveHelper(a, x, i, n, target, iter + 1);
// //         }
// //     }
// // }

// // void printorderedpairs(int a[], int n, int target)
// // {
// //     for (int i = 2; i <= n; i++)
// //     {
// //         int *x = (int *)malloc(i * sizeof(int));
// //         recursiveHelper(a, x, i, n, target, 0);
// //         free(x);
// //     }
// // }

// // int main()
// // {
// //     int size;
// //     scanf("%d", &size);
// //     int A[size];

// //     for (int i = 0; i < size; i++)
// //     {
// //         scanf("%d", &A[i]);
// //     }
// //     int target;
// //     scanf("%d", &target);
// //     printorderedpairs(A, size, target);

// //     return 0;
// // }

// // // #include <stdio.h>

// // // void generate_combinations(int arr[], int data[], int start, int end, int index, int r, int target)
// // // {
// // //     int sum = 0;
// // //     if (index == r)
// // //     {
// // //         for (int i = 0; i < r; i++)
// // //         {
// // //             sum += data[i];
// // //         }
// // //         if (sum == target)
// // //         {
// // //             for (int i = 0; i < r; i++)
// // //             {

// // //                 if (i == (r - 1))
// // //                 {
// // //                     printf("%d\n", data[i]);
// // //                 }
// // //                 else
// // //                 {
// // //                     printf("%d,", data[i]);
// // //                 }
// // //             }
// // //         }
// // //         return;
// // //     }

// // //     for (int i = start; i < end && end - i >= r - index; i++)
// // //     {
// // //         data[index] = arr[i];
// // //         generate_combinations(arr, data, i + 1, end, index + 1, r, target);
// // //     }
// // // }

// // // void print_all_combinations(int arr[], int n, int target)
// // // {
// // //     for (int r = 2; r <= n; r++)
// // //     {
// // //         int data[r];
// // //         generate_combinations(arr, data, 0, n, 0, r, target);
// // //     }
// // // }

// // // int main()
// // // {
// // //     int size;
// // //     scanf("%d", &size);
// // //     int A[size];

// // //     for (int i = 0; i < size; i++)
// // //     {
// // //         scanf("%d", &A[i]);
// // //     }
// // //     int target;
// // //     scanf("%d", &target);

// // //     print_all_combinations(A, size, target);

// // //     return 0;
// // // }

// // // #include <stdio.h>

// // // void kombinationen_generieren(int arr[], int daten[], int start, int ende, int index, int r, int ziel)
// // // {
// // //     int summe = 0;
// // //     if (index == r)
// // //     {
// // //         for (int i = 0; i < r; i++)
// // //         {
// // //             summe += daten[i];
// // //         }
// // //         if (summe == ziel)
// // //         {
// // //             for (int i = 0; i < r; i++)
// // //             {
// // //                 if (i == (r - 1))
// // //                 {
// // //                     printf("%d\n", daten[i]);
// // //                 }
// // //                 else
// // //                 {
// // //                     printf("%d,", daten[i]);
// // //                 }
// // //             }
// // //         }
// // //         return;
// // //     }

// // //     for (int i = start; i < ende && ende - i >= r - index; i++)
// // //     {
// // //         daten[index] = arr[i];
// // //         kombinationen_generieren(arr, daten, i + 1, ende, index + 1, r, ziel);
// // //     }
// // // }

// // // void alle_kombinationen_ausgeben(int arr[], int n, int ziel)
// // // {
// // //     for (int r = 2; r <= n; r++)
// // //     {
// // //         int daten[r];
// // //         kombinationen_generieren(arr, daten, 0, n, 0, r, ziel);
// // //     }
// // // }

// // // int main()
// // // {
// // //     int groesse;
// // //     scanf("%d", &groesse);
// // //     int A[groesse];

// // //     for (int i = 0; i < groesse; i++)
// // //     {
// // //         scanf("%d", &A[i]);
// // //     }
// // //     int ziel;
// // //     scanf("%d", &ziel);

// // //     alle_kombinationen_ausgeben(A, groesse, ziel);

// // //     return 0;
// // // }

// #include <stdio.h>

// void printSubsequence(int A[], int n, int mask)
// {
//     int isFirstElementPrinted = 0; // To track if the first element is printed

//     for (int i = 0; i < n; i++)
//     {
//         if (mask & (1 << i))
//         {
//             // Print a comma before the element if it's not the first element
//             if (isFirstElementPrinted)
//             {
//                 printf(",");
//             }

//             printf("%d", A[i]);

//             isFirstElementPrinted = 1; // Set the flag to true after printing the first element
//         }
//     }
//     printf(" \n");
// }

// // Main function to print subsequences with the given sum
// void printSubsequencesWithSum(int A[], int n, int target)
// {
//     // Total number of possible subsequences is 2^n
//     int totalSubsequences = 1 << n;

//     // Iterate through all possible subsequences
//     for (int mask = 1; mask < totalSubsequences; mask++)
//     {
//         int currentSum = 0;

//         // Calculate the sum of the current subsequence
//         for (int i = 0; i < n; i++)
//         {
//             if (mask & (1 << i))
//             {
//                 currentSum += A[i];
//             }
//         }

//         // Check if the sum matches the target
//         if (currentSum == target)
//         {
//             printSubsequence(A, n, mask);
//         }
//     }
// }

// int main()
// {
//     int size;
//     scanf("%d", &size);
//     int A[size];

//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     int target;
//     scanf("%d", &target);
//     printSubsequencesWithSum(A, size, target);

//     return 0;
// }

#include <stdio.h>

void druckeTeilfolge(int A[], int n, int maske)
{
    int istErstesElementGedruckt = 0; // Um zu verfolgen, ob das erste Element gedruckt wurde

    for (int i = 0; i < n; i++)
    {
        if (maske & (1 << i))
        {
            // Drucken Sie ein Komma vor dem Element, wenn es nicht das erste Element ist
            if (istErstesElementGedruckt)
            {
                printf(",");
            }

            printf("%d", A[i]);

            istErstesElementGedruckt = 1; // Setzen Sie die Flagge auf true, nachdem das erste Element gedruckt wurde
        }
    }
    printf(" \n");
}

// Hauptfunktion zum Drucken von Teilfolgen mit der gegebenen Summe
void druckeTeilfolgenMitSumme(int A[], int n, int ziel)
{
    // Gesamtanzahl möglicher Teilfolgen ist 2^n
    int gesamtTeilfolgen = 1 << n;

    // Iterieren Sie durch alle möglichen Teilfolgen
    for (int maske = 1; maske < gesamtTeilfolgen; maske++)
    {
        int aktuelleSumme = 0;

        // Berechnen Sie die Summe der aktuellen Teilfolge
        for (int i = 0; i < n; i++)
        {
            if (maske & (1 << i))
            {
                aktuelleSumme += A[i];
            }
        }

        // Überprüfen Sie, ob die Summe mit dem Ziel übereinstimmt
        if (aktuelleSumme == ziel)
        {
            druckeTeilfolge(A, n, maske);
        }
    }
}

int main()
{
    int grobe;
    scanf("%d", &grobe);
    int A[grobe];

    for (int i = 0; i < grobe; i++)
    {
        scanf("%d", &A[i]);
    }
    int ziel;
    scanf("%d", &ziel);
    druckeTeilfolgenMitSumme(A, grobe, ziel);

    return 0;
}

