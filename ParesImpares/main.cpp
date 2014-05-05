#include <iostream>

using namespace std;

int main()
{
    int num, ul, ccp=0, cci=0, ccc=0;

    cout<<"Ingresar numero: ";
    cin>>num;

    while(num!=0)
    {
       ul = num % 10;
       num = num / 10;

       if((ul % 2==0)and (ul!=0))
       {
           ccp++;
       }
       else if ((ul % 2!=0)and (ul!=0))
       {
           cci++;
       }

       if(ul==0)
       {
           ccc++;


       }
    }

    cout<<"Cifras Pares: "<<ccp<<"\n";
    cout<<"Cifras Impares: "<<cci<<"\n";
    cout<<"Cifras ceros: "<<ccc<<"\n";

    return 0;
}
