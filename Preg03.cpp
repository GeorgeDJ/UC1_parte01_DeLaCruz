#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Datos de Entrada:\n";
    cout<<"Horas: ";
    cin>>x;
    cout<<"Datos de Salida:\n";
    if(x<=4) y=6;
    else if(x>4) y=6+(x-4)*2;
    cout<<"Importe a pagar: S/."<<y;

    return 0;
}

