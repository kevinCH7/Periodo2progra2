#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero, cp=0, ci=0, c=0;

    cout<<"Ingresar numero: ";
    cin>>numero;

    while(c=numero)
    {
       numero = numero /10;
       if(numero %2==0)
       {
           cp++;
       }
       else
       {
           ci++;
       }
       c++;
    }

    cout<<"Numero pares: "<<cp<<"\n";
    cout<<"Numero impares: "<<ci<<"\n\n";

    system("PAUSE");


    return 0;
}
