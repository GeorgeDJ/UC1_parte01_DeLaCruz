
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Datos de Entrada:\n";
    cout<<"Ganancia: ";
    cin>>x;
    cout<<"Datos de Salida:\n";
    if(x>=0 and x<=1000) x=x*0.05;
    else if(x>1000 and x<=1500) x=x*0.07;
    else if(x>1500 and x<=2000) x=x*0.08;
    else if(x>2000 and x<=5000) x=x*0.10;
    else if(x>5000) x=x*0.15;
    cout<<"Donancion: S/."<<x;

    return 0;
}
