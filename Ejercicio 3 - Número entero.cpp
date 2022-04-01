#include <iostream>
using namespace std;

int main() {
	int num,num1,num2,num3,result,cont,sum;

	do {
		cout << "Digite el numero entero: ";
		cin >> num; //numero entero

		if (num%2 == 0) { //en caso de que sea par
			num1=num+2; //se suma dos para hallar el siguiente par

		} else { //en caso de que el número sea impar
			num1=num+1; //se suma uno para hallar su siguiente par
		}

		num2 = num1 + 2; //sumamos dos al par hallado anteriormente
		num3 = num2 + 2; //sumamos dos al segundo par hallado
		
		sum = num1+num2+num3; //suma de los tres pares
		result=num*(sum); //multiplicación de la suma por el numero

		//Resultados --> mostramos todos los resultados
		cout<<"El resultado de la suma de los tres numeros es: "<<sum<<endl;
		cout << "El resultado de la suma multiplicada por "<<num<<" es: " << result<<endl;

		//Repetimos el programa si el usuario lo quiere
		cout<<endl<< "Quiere repetir el repetir el programa?"<<endl<<"1. Si"<<endl<< "2. No"<<endl<<"Opcion: ";
		cin>>cont;
		cout<<endl;
	} while (cont == 1);

	return 0;
}