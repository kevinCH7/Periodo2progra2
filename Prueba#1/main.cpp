#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;
/*
Generar 10 numeros aleatorios y contar los numeros que son divisibles
entre 5 y obtener su promedio.
Obtener el promedio de todos los numeros ingresados y presentar
la suma.
*/

int main()
{


    int num, cN5=0, suma=0, suma1=0, proM5=0,pro2=0, c=0;
    srand(time(0));

    while(c<10)
    {

      num = 1 + rand() % (100-1);

      cout << "Numero: "<< num <<"\n";

      suma = num + suma;

      if (num %5==0)
      {
          suma1+=num;
          cN5++;
      }
       c++;
    }

    proM5=suma1/cN5;
    pro2=suma/c;

    cout << "Suma de Numeros divisibles entre cinco: "<< suma1 <<"\n";
    cout << "Promedio de Numeros divisibles entre cinco: "<< proM5 <<"\n";
    cout << "Suma Total de Numeros: "<< suma <<"\n";
    cout << "Promedio total de Numeros: "<< pro2 <<"\n";

    system("PAUSE");


    return 0;

}
