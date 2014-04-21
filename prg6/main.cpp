#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int num;
    cout<<"Numero: ";
    cin>>num;

    if (num < 0)
    {
        cout<<"Numero es negativo";
    }
    else if (num > 0)
    {
        cout<<"Numero es Positivo";
    }
    else
    {
        cout<<"Numero no es cero";
    }

    cout<<"\n";

    system("PAUSE");

    return 0;
}
