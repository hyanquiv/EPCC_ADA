#include <bits/stdc++.h>
using namespace std;

ofstream fw("simulationInsSort.md", std::ofstream::out);

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        fw << arr[i] << " ";
    fw << endl;
}

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
        printArray(arr, n);
    }
}

int main()
{
    int n = 10;
    int values[n];
    for (int i = 0; i < n; i++)
        values[i] = rand();
    insSort(values, n);
    fw.close();
    return 0;
}