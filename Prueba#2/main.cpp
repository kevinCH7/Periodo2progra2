#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int numero, c=1, factorial=1;
    char resp;

    do
    {

    do
    {

       do
       {
           cout<<"Ingresar numero: ";
           cin>>numero;
       }while(!(numero %2==0));


    }while(!((numero>=1) and (numero<=10)));

    do
    {
      _flushall();
       do
       {
         factorial = c * factorial;
         c++;
       }
       while (c<=numero);

          cout<<"Factorial: "<<factorial<<"\n";

          cout<<"Desea Continuar..";
          cin.get(resp);

    }while((resp !='S') and (resp !='N'));

    }while(resp !='N');

    cout<<"\n";
    system("PAUSE");



    return 0;
}
