#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    char resp;
    int numero, factorial=1;

    do
    {
        do
        {
            cout<<"Ingresar numero par entre 1-10: ";
            cin>>numero;
        }while(!(numero %2==0) and (numero>=1) and (numero<=10));

        for(int i=1; i<=numero; i++)
        {
           factorial *= i;
        }
        cout<<"Factorial: "<<numero<<"es"<<factorial<<"\n";

        _flushall();

        do
        {
            cout<<"Desea Continuar..";
            cin.get(resp);
            _flushall();

        }while((resp!='S')and(resp!='N'));

    }while(resp != 'N');

    return 0;
}
