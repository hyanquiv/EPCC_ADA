
//Implementar el algoritmo Insertion Sort, seg ́un el pseudo codigo presentando en el libro de Introducci ́on a los Algoritmos de Thomas H. Cormen.

#include <bits/stdc++.h>
using namespace std;

void insSort(int arr[], int n)
{
    int j, key, i;
    for (j = 1; j < n; j++)
    {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i -= 1;
        }
        arr[i + 1] = key;
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
    int a[] = {12, 11, 13,10,8,56,1, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);

    insSort(a, n);
    printArray(a, n);

    return 0;
}*/
