//USANDO POW
#include <iostream>
#include <math.h> //libreria para usar pow
using namespace std;

int main() {
	int num, i,rep,total;
	
	do{
	i=1;
	total=1;

	cout<<"Digite un numero entero: ";
	cin>>num;

	if (num%2 == 0) { //si es un numero par
		cout<<"El numero es par"<<endl;
		total=pow(num,7); //calculamos su potencia
		cout<<"Potencia: "<<num<<"^7= "<<total<<endl;

	} else { //si es un numero impar
		do {
			total=total*i; //calculamos su factorial
			i++; //i comienza en 1 y va multiplicando hasta el valor del impar ingresadp
		} while(i<=num);
		cout<<"El numero es impar"<<endl;
		cout<<"Factorial: "<<num<<"!="<<total<<endl;
	}
	
	//Repetimos el programa si el usuario lo quiere
		cout<<endl<< "Quiere repetir el repetir el programa?"<<endl<<"1. Si"<<endl<< "2. No"<<endl<<"Opcion: ";
		cin>>rep;
		cout<<endl;
	} while(rep=1); 

	return 0;
}