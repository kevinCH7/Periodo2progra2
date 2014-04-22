#include <iostream>
#include <stdlib.h>

using namespace std;
/* Estructuras de repeticion
   ingresar 5 numeros y presentar al final del ciclo
   la suma de los numeros ingresados.
*/

int main()
{
    int mayor50;
    int num, suma, suma2;
    int c=0;
    suma=0;
    suma2=0;
    mayor50=0;

    while(c<5)
    {
        cout<<"Ingresar un numero: ";
        cin>>num;
        if (num>50)
        {
            mayor50++;
            suma2 = suma2 + num;
        }

        c++; //c = c ´ 1; estamos contando las veces que se repite el ciclo
        suma = num + suma; //suma += num; sumando los numeros ingresados
    }

    cout<<"Suma de numeros de 50 es: "<<suma2<<"\n";
    cout<<"Numeros mayores a 50 es: "<<mayor50<<"\n";
    cout<<"Suma de los numeros es: "<< suma << "\n";
    system("PAUSE");


}
