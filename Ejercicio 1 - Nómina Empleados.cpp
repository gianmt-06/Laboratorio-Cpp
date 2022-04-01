#include<iostream>
using namespace std;

int main(){
	int empleados,hext,i,ntotal,trab,sfin;
	float stotal;
	i=1;
	ntotal= 0;
	
	do{ //opción para que use el programa con cualquier cantidad de empleados
		cout<<"Ingrese la cantidad de trabajadores: "; //lo correcto sería ingresar 10 (por el requerimiento)
		cin>>trab;
	} while(trab<0);
	
	do{	//el ciclo se repetirá por la cantidad de empleados ingresada
	stotal=855000-(855000*0.26); //descontando el 26% de las prestaciones sociales
	
	do{
		cout<<"Trabajador "<<i<<endl;
		cout<<"Ingrese las horas extras trabajadas: ";
		cin>>hext;
	}while(hext<0);
	
	if((hext>0)&&(hext<20)){
		sfin=stotal+(stotal*0.1); //Calculamos el descuento del 10%
		
	} else if((hext>=20)&&(hext<32)){
		sfin=stotal+(stotal*0.15);//Calculamos el descuento del 15%
		
	} else if(hext>=32){
		sfin=stotal+(stotal*0.20); //Calculamos el descuento del 20%
		
	} else {
		sfin=stotal; //si no cumple ninguna condición simplemente dejamos el sueldo igual
	}
	
	ntotal=ntotal+stotal; //acá se suman todos los sueldos (acumulador)
	cout<<"El salario del empleado "<<i<<" es:"<<sfin<<endl;
	i++;
	}while(i<=trab);
	
	cout<<"La nomina total de los "<<trab<<" empleados es: "<<ntotal; //imprime la suma de toda las nóminas
	
	return 0;
}
