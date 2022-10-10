#include<iostream>
using namespace std;
int main(){
	int n, i, suma;
	cout<<"Ingresar el valor de n: ";
    cin>>n; 
suma = 0;
 for(i=1; i<=n;i++){
    suma=suma+i;
 }
 cout<<"La suma de los primero numeros naturales hasta "<<n<<" es :"<<suma;
return 0;
}

