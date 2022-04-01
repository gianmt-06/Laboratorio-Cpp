#include <iostream>
using namespace std;
//CÓDIGO OPTIMIZADO!!!!! 
//USO DE BUCLES
int main(){ 
	float sum,notas,prom;
	int i; 
	
	//Inicialización de variables
	i=1;
	prom=0;
	
	cout<<"Programa para definir si un estudiante aprueba o no aprueba el semestre. "<<endl<<endl;
	do{
		cout<<"Ingrese la nota numero "<<i<<": ";
		cin>>notas; //Ingresa las notas (cada una)
		sum=sum+notas; //suma las notas
		i++; //contador para defunir las 6 notas
	}while(i<=6);

	prom = sum/6; //calcula el promedio
	
	if(prom>3.5){ //condición para saber si aprobó o reprobó
		cout<<"FELICIDADES!! Has aprobado el semestre."<<endl;
	} else {
		cout<<"OH NO!! Has reprobado el semestre. Hazlo mejor la proxima"<<endl;
	}
	
	return 0;
}