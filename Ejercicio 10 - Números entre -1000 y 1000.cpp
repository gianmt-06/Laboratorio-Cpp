#include <iostream>
using namespace std;

int main() {
	int nums,numi,sumprs,prdimp,sumneg,potpar,i;

	//Inicialización de variables
	i=1;
	sumprs=0;
	prdimp=1;
	sumneg=0;
	
	cout<<"Manual de uso"<<endl<<endl;
	cout<<"- El programa esta disenado para recibir numeros enteros en un rango entre -1000 y 1000, por lo tanto"<<endl
	<<"no recibira numeros que se salgan de dicho rango."<<endl;
	cout<<"- El programa no recibira mas de 2000 numeros"<<endl;
	cout<<"- Ademas de repetirse las veces que el usuario defina desde un inicio, el programa esta disenado para terminar"<<endl
	<<"en cualquier momento"<<endl;
	cout<<"- Digite 9999 para finalizar la ejecucion del programa en cualquier momento"<<endl<<endl;
	
	cout<<"Inicio del programa"<<endl<<endl;
	
	cout<<"Cuantos numeros quiere que lea el programa?: ";
	cin>>nums;
	
	while((nums>2000)){ //Evita que se imgresen más de 2000 números
		cout<<"Recuerde que los numeros deben estar entre -1000 y 1000 por lo tanto no pueden ingresar mas de 2000 numeros"
		<<endl<<"Ingrese nuevamente la cantidad de numeros: ";
		cin>>nums;
	}

	do { //repite el programa las veces que el usuario lo desee (cantidad de numeros)
		cout<<endl<<"Ingrese el numero "<<i<<":"; //Posición del número dentro de la serie
		cin>>numi;
		
		if(numi==9999){ //Puede detener el programa desde la primera vez que se ejecute
			 	cout<<"Acaba de elegir terminar el programa"<<endl;
				nums=0;
			 	numi=0;
			}
		while(numi<-1000){ //Evita que el número sea menor a -1000
			cout<<"El numero no puede ser menor a -1000"<<endl<<"Ingrese nuevamente el numero: ";
			cin>>numi;
			if(numi==9999){ //detiene el programa en caso de que el numero ingresado anteriormente sea menor a -1000
			 	cout<<"Acaba de elegir terminar el programa"<<endl;
			 	nums=0;
			 	numi=0;
			}
		}

		while(numi>1000) { //Evita que el número sea mayor a 1000
			cout<<"El numero no puede ser mayor a 1000"<<endl<<"Ingrese nuevamente el numero: ";
			cin>>numi;
			if(numi==9999){ //detiene el programa en caso de que el numero ingresado anteriormente sea mayor a 1000
			 	cout<<"Acaba de elegir terminar el programa"<<endl;
				 nums=0;
			 	numi=0;
			}
		}
		
		if(numi%2==0){ //Determina si el número ingresado es par 
			sumprs=sumprs+numi; //Va sumando todos los números pares
			
		}else{ //Si no es par es impar 
			prdimp=prdimp*numi; //Calcula el producto de todos los numeros impares 
			potpar=numi*numi; //Calcula la potencia par (^2) del número por individual
			cout<<"La potencia par (^2) de "<<numi<<" es: "<<potpar<<endl; //Imprime la potencia par 
		}
		
		if(numi<0){ //Si el número es menor a cero entonces es negativo
			sumneg=sumneg+numi; //Suma todos los números negativos
		}
		
		
		i++; //Va aumentando el contador para que el bucle termine según los números que quiso ingresar el usuario
	} while(i<=nums); 
	
	cout<<endl<<"La suma de los numeros pares es: "<<sumprs<<endl;
	cout<<"El producto de los numeros impares: "<<prdimp<<endl;
	cout<<"La suma de los numeros negativos es: "<<sumneg;
	
	return 0;
}
