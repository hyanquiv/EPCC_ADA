#include <bits/stdc++.h>


int maxDigit(int n)
{
    int max = 0;

    while (n)
    {
        int r = n % 10;

        if(r>max)
            max=r;

        n = n / 10;
    }
    return max;
}

void calculateSteps(int x)
{
    if (x < 10)
    {
        std::cout <<" -> "<< 0;
        return;
    }
    else
    {
        x -= maxDigit(x);
        std::cout << " -> " << x;
        return calculateSteps(x);
    }
}

int main()
{
    int x = 999;
    std::cout << x;
    calculateSteps(x);
}