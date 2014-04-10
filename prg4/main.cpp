#include <iostream>
#include <stdlib.h>
#include <time.h>
/*
ingresar un numero y escribir en la pantalla en el rango que se encuentra el numero.
rango
1-100
101-300
301-500
500-
*/

using namespace std;

int main()
{
    int numero;
    srand(time(0));

    numero= 1 + rand() % (500-1);
    cout<<"Numero generado es...:"<<numero<<"\n";
    //cout<<"Ingresar un numero entero...>";
    //cin>>numero;
    //cout<<"\n";

    if((numero>=1) and (numero<=100))
    {
        cout<<"El numero esta en el rango de 1-100 "<<"\n";
    }
    else if((numero>=101)and(numero<=300))
    {
        cout<<"El numero esta en el rango de 101-300 "<<"\n";
    }
     else if((numero>=301)and(numero<=500))
    {
        cout<<"El numero esta en el rango de 301-500 "<<"\n";
    }
    else  if (numero>500)
    {
        cout<<"El numero es mayor a 500 "<<"\n";
    }
    else
    {
        cout<<"El numero es negativo"<<"\n";
    }
    system("PAUSE");

    return 0;
}
