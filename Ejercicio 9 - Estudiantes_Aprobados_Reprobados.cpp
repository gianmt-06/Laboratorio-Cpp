#include <iostream>
using namespace std;
//CÓDIGO OPTIMIZADO!!!!! 
//USO DE BUCLES
int main(){ 
	float sum,notas,prom;
	int i,cont_Est,est,aprob,reprob; 
	
	//Inicialización de variables
	i=1;
	cont_Est=1;
	prom=0;
	aprob=0;
	aprob=0;
	
	cout<<"Programa para definir si un estudiante aprueba o no aprueba el semestre. "<<endl<<endl;
	cout<<"Ingrese la cantidad de estudiantes de la facultad: ";
	cin>>est;
	cout<<endl;
	
	do{
	sum=0; //reinicia la variable suma para que no afecte el proceso del siguiente estudiante
	cout<<"Estudiante No. "<<cont_Est<<endl;
	
	do{
		cout<<"Ingrese la nota numero "<<i<<": ";
		cin>>notas; //Ingresa las notas (cada una)
		sum=sum+notas; //suma las notas
		i++; //contador para defunir las 6 notas
	}while(i<=6);
	i=1;
	prom = sum/6; //calcula el promedio
	
	if(prom>3.5){ //condición para saber si aprobó o reprobó
		cout<<"El estudiante "<<cont_Est<<" ha aprobado el corte."<<endl<<endl; //notifica por individual los estudiantes aprobados
		aprob++; //aumenta el contador de estudiantes aprobados
	} else {
	cout<<"El estudiante "<<cont_Est<<" ha reprobado el corte."<<endl<<endl; //notifica por individual los estudiantes reprobados
		reprob++; //aumenta el contador de estudiantes aprobados
	}
	
	cont_Est++; //aumenta el contador de estudiantes
	}while(cont_Est<=est);
	
	cout<<"El total de estudiantes aprobados fueron "<<aprob<<" ("<<aprob<<"/"<<est<<")"<<endl; //imprime la cantidad total de estudiantes aprobados
	cout<<"El total de estudiantes reprobados fueron "<<reprob<<" ("<<reprob<<"/"<<est<<")"; //imprime la cantidad total de estudiantes reprobados
	
	return 0;
}