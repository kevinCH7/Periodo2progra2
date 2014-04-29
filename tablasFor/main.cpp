#include <iostream>

using namespace std;
/*
Ingresar un numero entre 1-10 y presentar la tabla de multiplicar de 1 a 10.
Hacer 5 veces.
*/

int main()
{
    int numero;
    int multi=1;

    for (int i=0; i<5; i++)
    {
      do
      {
          cout<<"ingresar numero: ";
          cin>>numero;


      }while (!((numero>=1) and (numero<=10)));

      for (int c=1; c<=10; c++)
      {
          multi=numero*c;
          cout<<c<<" X "<<numero<<" = "<<multi<<"\n";

      }
    cout<<"\n";

    }




    return 0;
}
