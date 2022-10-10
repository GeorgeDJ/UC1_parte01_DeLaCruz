#include<iostream>

using namespace std;

int main(){
	int a, b, i;
	
	cout<<"Digite un numero A: ";
	cin>>a;
	cout<<"Digite un nùmero B: ";
	cin>>b;
	
	i=a;
	a=b;
	b=i;
	cout<<"El intercambio de valores seria: ";
	cout<<"\n";
	cout<<"A: "<<a;
	cout<<"\n";
	cout<<"B: "<<b;
}
