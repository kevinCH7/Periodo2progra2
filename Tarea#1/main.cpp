#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int dia, mes, year;

    cout<<"Dia: ";
    cin>>dia;

    cout<<"Mes: ";
    cin>>mes;

    cout<<"Año: ";
    cin>>year;


    if ((dia<=31) and (mes==1) and (mes==3) and (mes==5) and (mes==7) and (mes==8) and (mes==10) and (mes==12) and (year>0))
    {
       cout<<"Fecha correcta"<<"\n";
    }
    else if ((dia<=30) and (mes==4) and (mes==6) and (mes==9) and (mes==11) and (year>0))
    {
       cout<<"Fecha correcta"<<"\n";
    }
    else if ((dia<=28) and (mes==2) and (year>0))
    {
       cout<<"Fecha correcta"<<"\n";
    }
    else
    {
       cout<<"Fecha incorrecta"<<"\n";
    }

    system("PAUSE");

    return 0;
}
