
/*
El bucle While del algoritmo Insertion Sort, a veces es visto como una b ́usqueda secuencial, donde se esta tratando
de localizar una posici ́on adecuada para un elemento. Modifique este comportamiento de b ́usqueda secuencial por
el algoritmo de b ́usqueda binaria.
*/

#include <bits/stdc++.h>
using namespace std;

int BS(int arr[], int item, int floor, int ceil)
{
    if (ceil <= floor)
        return (item > arr[floor]) ? (floor + 1) : floor;

    int mid = (floor + ceil) / 2;

    if (item == arr[mid])
        return mid + 1;

    if (item > arr[mid])
        return BS(arr, item, mid + 1, ceil);
    return BS(arr, item, floor, mid - 1);
}

void insertionSort(int a[], int n)
{
    int j, target, i, k, scope;
    for (j = 1; j < n; ++j)
    {
        i = j - 1;
        scope = a[j];

        target = BS(a, scope, 0, i);

        while (i >= target)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = scope;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
/*
int main()
{
    int a[] = {37, 13, 0, 171, 124, 72, 315, 416, 170, 808, 544};
    int n = sizeof(a) / sizeof(a[0]);

    insertionSort(a, n);
    printArray(a,n);

    return 0;
}*/