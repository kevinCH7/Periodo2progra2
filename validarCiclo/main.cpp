#include <iostream>
#include <stdio.h>

using namespace std;
/*
Ingresar un numero divisible entre 5, validarlo luego preguntar si desea continuar,
al final presentar la suma de los numeros.
*/

int main()
{
    int numero, suma=0;
    char resp;

    do
    {
       do
       {
           cout<<"Ingresar numero: ";
           cin>>numero;
       }while(!(numero %5==0));

       suma=suma+numero;

       _flushall();
       do
        {
            cout<<"Desea Continuar..";
            cin.get(resp);
            _flushall();

        }while((resp!='S')and(resp!='N'));

    }while(resp != 'N');

    cout<<"Suma: "<<suma;

    return 0;
}
