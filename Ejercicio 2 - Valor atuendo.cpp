#include<iostream>
using namespace std;

int main(){
	int can_usr,rep,i,prod,acum;
	
	//inicialización de variables
	rep=1;
	
	cout<<"Ingrese la cantidad de personas que usaran el programa: ";
	cin>>can_usr;
	
	while(rep<=can_usr){
		acum=0;
		cout<<endl<<"Usuario "<<rep<<endl<<endl;
		
		i=1; 
		do{ //ciclo para las camisass
		cout<<"Ingrese el valor de la camisa "<<i<<": ";
		cin>>prod;
		acum=acum+prod;
		i++;
		}while(i<=4);
		cout<<endl;
		i=1; 
		do{ //ciclo para los pantalones
		cout<<"Ingrese el valor del pantalon "<<i<<": ";
		cin>>prod;
		acum=acum+prod;
		i++;
		}while(i<=3);
		cout<<endl;
		i=1;
		do{ //ciclo para los zapatos
		cout<<"Ingrese el valor del par de zapatos "<<i<<": ";
		cin>>prod;
		acum=acum+prod;
		i++;
		}while(i<=2);
		cout<<endl;
		cout<<"Ingrese el valor de la chaqueta: ";
		cin>>prod;
		acum=acum+prod;
		cout<<endl;
		i=1;
		do{ //ciclo para los libros
		cout<<"Ingrese el valor del libro "<<i<<": ";
		cin>>prod;
		acum=acum+prod;
		i++;
		}while(i<=4);
		
		cout<<endl<<"El valor total gastado en el atuendo del usuario "<<rep<<" es: "<<acum<<endl
		;
		rep++;
	}
	return 0;
}