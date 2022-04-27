/* Producto máximo de dos números en un secuencia
Dada una secuencia de n números no negativos y mayores que creo.
El objetivo es encontrar el mayor número que se pueda obtener
multiplicando dos números de esta secuencia.
Usando un bucle for.*/

#include <bits/stdc++.h>

int MaxProduct(std::vector<int>& numbers) { 

}

int main(){
    //Lectura de datos
    std::vector<int> numbers{};
    int n{};
    while (std::cin >> n )
    {
        numbers.push_back(n);
    }
    //salida de datos
    std::cout<<MaxProduct(numbers)<<'\n';
}