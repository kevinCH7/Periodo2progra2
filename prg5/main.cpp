#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
Determinar si un numero es par o impar
*/

int main()
{
    int numero, numero2;
    srand(time(0));
    cout << "Numero...>";
    cin>>numero;

    if(numero % 2==0)
    {
        cout<<"EL NUMERO ES PAR";
    }
    else
    {
        cout<<"EL NUMERO ES IMPAR";
    }
    cout<<"\n";

    numero2= 1 + rand() % (1000-1);


    if((numero % 2==0) and (numero % 5==0))
    {
        cout<<"EL NUMERO2 es "<<numero2<<"es divisible entre 2 y 5"<<"\n";
    }
    else
    {
        cout<<"EL NUMERO2 es "<<numero2<<"
        y no es divisible entre 2 y 5"<<"\n";
    }

    system("PAUSE");

    return 0;
}
