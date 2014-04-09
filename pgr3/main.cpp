#include <iostream>
#include <stdlib.h>



using namespace std;

/*
ingresar

Tiene un bono si trabaja en el turno 1 0 3 de 400 lps.

*/

int main()
{
    char nombre [30];
    int horas, pagoxhora, pbruto, ihss, tp;
    int turno;
    int bono;

    cout << "Ingresar nombre del empleado..:";
    cin.getline(nombre, 30);/* para leer cadena de texto*/

    cout<<"Horas trabajadas...:";
    cin>>horas;

     cout<<"Turno de trabajo..:";
     cin>>turno;

     if (turno==1)
     {
         pagoxhora=200;
     }
     else if(turno==2)
     {
         pagoxhora=300;
     }
     else if(turno==3)
     {
         pagoxhora=370;
     }
     else
     {
         pagoxhora=0;
     }

     if ((turno==1)or(turno==3))// || es igual a escribir or
     {
         bono=400;
     }
     else
     {
         bono=0;
     }
     pbruto= (pagoxhora*horas)+bono;

     if(pbruto>7000)
     {
         ihss=245;
     }
     else
     {
         ihss=0.035*pbruto;
     }

     tp = pbruto - ihss;

     cout<<"Pago por hora..:"<<pagoxhora<<"\n";
     cout<<"Bono ganado es..:"<<bono<<"\n";
     cout<<"Pago antes de deduccion..:"<<pbruto<<"\n";
     cout<<"Seguro Social..:"<<ihss<<"\n";
     cout<<"Total a pagar..:"<<tp<<"\n";

     system("PAUSE");

    return 0;

}
