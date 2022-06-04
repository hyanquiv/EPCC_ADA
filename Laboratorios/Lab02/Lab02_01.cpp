#include <bits/stdc++.h>

using namespace std;

void merge(int array[], int const p, int const q, int const r)
{
    auto const n_1 = q - p + 1;
    auto const n_2 = r - q;
    auto i = 1, j = 1;
    auto *L = new int[n_1], *R = new int[n_2];

    for (i; i < n_1; i++)
        L[i] = array[p + i - 1];
    for (j; j < n_2; j++)
        R[j] = array[q + j];

    L[n_1 + 1] = INT_MAX;
    R[n_2 + 1] = INT_MAX;

    i = 1;
    j = 1;

    for (auto k = p; k < r; k++)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i += 1;
        }
        else
        {
            array[k] = R[j];
            j += 1;
        }
    }
}

void mergeSort(int array[], int const p, int const r)
{
    if (p < r)
    {
        auto q = (p + r) / 2;
        mergeSort(array, p, q);
        mergeSort(array, q + 1, r);
        merge(array, p, q, r);
    }
    return;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int a[] = {12, 11, 13, 10, 8, 56, 1, 5, 6, 100, 13, 1568, 165, 17, 222, 68};
    int n = sizeof(a) / sizeof(a[0]);
    printArray(a, n);
    mergeSort(a, 0, n);
    printArray(a, n);

    return 0;
}