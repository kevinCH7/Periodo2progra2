#include <iostream>
#include <stdlib.h>

using namespace std;
/*
Ingresar 5 numeros y determinar cuantos son pares e impares luego
debera de presentar al final el promedio de los numeros pares e impares y los contadores
*/
int main()
{
    int num, numpar, numimpar, suma1, suma2;
    int promedioimpar, promediopar;
    int c=0;
    suma1=0;
    suma2=0;
    numpar=0;
    numimpar=0;
    promediopar=0;
    promedioimpar=0;

    while(c<5)
    {
        cout<<"Numero: ";
        cin>> num;
         if (num % 2==0)
        {
            numpar++;
            suma1 = numpar + num;
        }
        else
        {
           numimpar++;
           suma2 = numimpar + num;

        }
        c++;
    }

    promediopar = suma1 / numpar;
    promedioimpar = suma2 / numimpar;

    cout<<"Numeros pares: "<< numpar<<"\n";
    cout<<"Numeros impares: "<< numimpar<<"\n";
    cout<<"Promedio par: "<<promediopar<<"\n";
    cout<<"Promedio impar: "<<promedioimpar<<"\n";

    system("PAUSE");


    return 0;
}
