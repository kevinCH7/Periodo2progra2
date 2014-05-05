#include <iostream>

using namespace std;

int main()
{
    int numero;

    do
      {
          cout<<"ingresar numero: ";
          cin>>numero;


      }while (!((numero>=1) and (numero<=10)));

    return 0;
}
