#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
Generar un numero random entre 1-350 y determinar el rango en el que se encuentra:
    1-50
    51-120
    120-200
*/

int main()
{

    srand(time(0));
    int num;

    num = 1 + rand() % (350-1);

    cout << "Numero: "<< num <<"\n";

     if((num>=1) and (num<=50))
    {
        cout<<"El numero esta en el rango de 1-50 "<<"\n";
    }
    else if((num>=51)and(num<=120))
    {
        cout<<"El numero esta en el rango de 51-120 "<<"\n";
    }
     else if((num>=121)and(num<=200))
    {
        cout<<"El numero esta en el rango de 121-200"<<"\n";

    }
    else if(num>=201)
    {
       cout<<"El numero es mayor que 200"<<"\n";
    }

     system("PAUSE");

    return 0;
}
