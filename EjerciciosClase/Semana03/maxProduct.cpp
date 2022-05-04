/* Producto máximo de dos números en un secuencia
Dada una secuencia de n números no negativos y mayores que creo.
El objetivo es encontrar el mayor número que se pueda obtener
multiplicando dos números de esta secuencia.
Usando un bucle for.*/

#include <bits/stdc++.h>
using namespace std;

int MaxProduct(std::vector<int>& numbers) {
    if (sizeof(numbers) < 2)
    {
        cout << "No hay pares\n";
        return EXIT_FAILURE;
    }

    if (sizeof(numbers) == 2)
    {
        return numbers[0] * numbers[1];
    }

    // Initialize maximum and second maximum
    int posa = INT_MIN, posb = INT_MIN;

    // Initialize minimum and second minimum
    int nega = INT_MIN, negb = INT_MIN;

    // Traverse given array
    for (unsigned int i = 0; i < sizeof(numbers); i++)
    {
        // Update maximum and second maximum if needed
        if (numbers[i] > posa)
        {
            posb = posa;
            posa = numbers[i];
        }
        else if (numbers[i] > posb)
            posb = numbers[i];

        // Update minimum and second minimum if needed
        if (numbers[i] < 0 && abs(numbers[i]) > abs(nega))
        {
            negb = nega;
            nega = numbers[i];
        }
        else if (numbers[i] < 0 && abs(numbers[i]) > abs(negb))
            negb = numbers[i];
    }

    if (nega * negb > posa * posb)
        return nega * negb;
    else
        return posa * posb ;
}

int main(){
    //Lectura de datos
    std::vector<int> numbers{};
    int n{};
    while (std::cin >> n )
    {
        if (n == -1)
            break;
        numbers.push_back(n);
    }
    //salida de datos
    std::cout<<MaxProduct(numbers)<<'\n';
}