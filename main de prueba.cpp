#include <iostream>
/* 9
Hacer un programa para ingresar una lista 10 n�meros e
informar el m�ximo de los negativos y el m�nimo de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
M�ximo Negativo: -3.
M�nimo Positivo: 2.


*/
using namespace std;

int main()
{
    cout << "ingresar 5 numeros" << endl;
   int i, n, maximoNegativos, minimoPositivos, flag, bandera;
   bandera = 1;
   flag = 1;

   for (i=0 ; i < 5 ; i++) {
    cin >> n;

if (bandera = 1 && n<=0 ) {maximoNegativos = n; bandera = 0;}
if (flag = 1 && n>=0  ) {minimoPositivos = n; flag = 0;}

if ( n > maximoNegativos && n<=0) {maximoNegativos = n;}
if (n < minimoPositivos && n>=0 ) {minimoPositivos = n;}

                            }
cout << maximoNegativos<< endl;
cout << minimoPositivos << endl;

return 0;
}
