#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero, rev, c=0;

    cout<<"Ingresar Numero: ";
    cin>>numero;

    while(c=numero)
    {
        rev = numero % 10;
        numero = numero /10;
        cout<<rev;
        c++;
    }

    cout<<"\n";

    system("PAUSE");

    return 0;
}
