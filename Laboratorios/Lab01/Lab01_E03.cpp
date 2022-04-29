
/*
En la siguiente actividad ser realizar ́a el an ́alisis de la complejidad del algoritmo Insertion Sort, para esto se tendr ́a
que ejecutar repetidamente el algoritmo implementado con diferentes cantidades de datos.
De manera aleatoria, generar una lista de n ́umeros n = 1000 y procesarlo con el algoritmo de ordenamiento.
Registre el tiempo empleado en procesar esa cantidad de datos. Una vez finalizado, aumente la cantidad de datos
a trabajar (n = 2000) y repita el proceso de ordenamiento, guardando el tiempo empleado.
Realice un gr ́afico de los tiempos registrados. Repita (k) el aumento de datos hasta que el gr ́afico muestre el
comportamiento cuadr ́atico del algoritmo (se sugiere k = 100).
*/
#include <bits/stdc++.h>
#include "Lab01_E02.cpp"

int main()
{
    int values[1000];
    for (int i=0;i<sizeof(values);i++)
    {
        values[i]=rand();
    }


    return 0;
    auto start = chrono::steady_clock::now();

    auto end = chrono::steady_clock::now();

    auto diff = end - start;

}