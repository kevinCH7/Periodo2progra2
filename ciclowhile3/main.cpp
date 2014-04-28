#include <iostream>

using namespace std;
/*
Ingresar 5 numeros y presentar al final del ciclo
en numero mayor
*/

int main()
{
    int num, c, mayor, menor;
    menor=1000;
    mayor=0;
    c=0;

    while(c<5)
    {
        cout<<"Numero: ";
        cin>>num;

        if(num>mayor)
        {
          mayor=num;
        }

        if(num < menor)
        {
            menor=num;
        }
        c++;
    }

    cout<<"Numero mayor: "<<mayor<<"\n";
    cout<<"Numero menor: "<<menor;

    return 0;
}
