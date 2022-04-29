
/*
En la siguiente actividad ser realizará el análisis de la complejidad del algoritmo Insertion Sort, para esto se tendrá
que ejecutar repetidamente el algoritmo implementado con diferentes cantidades de datos.
De manera aleatoria, generar una lista de números n = 1000 y procesarlo con el algoritmo de ordenamiento.
Registre el tiempo empleado en procesar esa cantidad de datos. Una vez finalizado, aumente la cantidad de datos
a trabajar (n = 2000) y repita el proceso de ordenamiento, guardando el tiempo empleado.
Realice un gráfico de los tiempos registrados. Repita (k) el aumento de datos hasta que el gráfico muestre el
comportamiento cuadratico del algoritmo (se sugiere k = 100).
*/

#include <bits/stdc++.h>
#include "Lab01_E02.cpp"

ofstream fw("dataIS.txt", std::ofstream::out);

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
            insertionSort(values, n);
            auto end = chrono::steady_clock::now();
            auto diff = chrono::duration_cast<chrono::milliseconds>(end - start);
            fw << diff.count() << std::endl;
            n += 1000;
        }
        fw.close();
    }
    else
        cout << "Problem with opening file";
    return 0;
}