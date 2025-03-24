#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char polinomio[30];
    int i, j, len, count = 0;
    cout << "Ingrese el polinomio: ";
    fgets(polinomio, sizeof(polinomio), stdin);
    len = strlen(polinomio);
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (polinomio[i] == '^' && polinomio[j] == '^')
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "El grado del polinomio es: " << polinomio[i] << endl;
            break;
        }
        count = 0;
    }
    return 0;
}
