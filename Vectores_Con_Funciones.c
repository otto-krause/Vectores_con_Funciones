#include <stdio.h>
#include <stdlib.h>
int sumar(int *m)
{
    int suma, suma2, i;
    suma = 0;
    suma2 = 0;
    for (i = 0; i < 10; i++)
    {
        suma = suma + m[i];
        printf("%d\n", m[i]);
        m[i] = m[i] + 1;
        suma2 = suma2 + m[i];
    }
    printf("La suma despues del incremento es %d\n", suma2);
    return suma;
}
int main()
{
    int vector[10] = {10, 1, 3, 10, 4, 9, 10, 8, 10, 10};
    
    printf("La suma antes del incremento es %d\n", sumar(vector));
    system("pause");
    return 0;
}
