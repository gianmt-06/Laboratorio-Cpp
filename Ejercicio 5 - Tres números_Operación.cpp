#include<iostream>
using namespace std;

int main() {
	float n1,n2,n3,i,opr;

	i=1;
	while(i<=10) {
		cout<<"Repeticion "<<i<<endl;
		cout<<"Ingrese el primer numero: ";
		cin>>n1;
		cout<<"Ingrese el segundo numero: ";
		cin>>n2;
		cout<<"Ingrese el tercer nuemero: ";
		cin>>n3;

		cout<<"El primer numero ingresado (n1) fue: "<<n1<<endl;
		cout<<"El segundo numero ingresado (n2) fue: "<<n2<<endl;
		cout<<"El tercer numero ingresado (n3) fue: "<<n3<<endl;

		opr=(2*n1)+(3*n2)-(n3/2);
		cout<<"La operacion a efectuar es: "<<"(2*"<<n1<<")+(3*"<<n2<<")-("<<n3<<"/2)"<<endl;
		cout<<"El resultado de la operacion es: "<<opr<<endl<<endl;

		i++;
	}

	return 0;
}