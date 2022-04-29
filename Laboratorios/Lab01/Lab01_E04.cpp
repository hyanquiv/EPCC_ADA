
/*
El algoritmo de la burbuja ( Bubblesort ) es uno de los algoritmos más simples de implementar pero ineficiente.
Repetir la actividad del Ejercicio 3 con este algoritmo. Realice un gráfico comparativo entre ambos algoritmos
e indique cual podría ser el tiempo de ejecución del algoritmo Bubblesort.
*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

ofstream fw("dataBS.txt", std::ofstream::out);

int main()
{
    if (fw.is_open())
    {
        int n = 1000;
        for (int k = 1; k <= 100; k++)
        {
            int values[n];
            for (int i = 0; i < n; i++)
            {
                values[i] = rand();
            }
            auto start = chrono::steady_clock::now();
            bubbleSort(values, n);
            auto end = chrono::steady_clock::now();
            auto diff = chrono::duration_cast<chrono::milliseconds>(end - start);
            fw << diff.count() << endl;
            n += 1000;
        }
        fw.close();
    }
    else
        cout << "Problem with opening file";
    return 0;
}