#include <iostream>
using namespace std;

int main() {
	int ang1,ang2,n,i,exp;

	//Inicialización de variables 
	i=1;//contador para saber cuantos van

	cout<<"Calcular el angulo desconocido de triangulos"<<endl<<"Ingrese la cantidad de triangulos: ";
	cin>>n; //Cantidad de triangulos a calcular (serie de triangulos)

	while(n<=0) { //Evita que el usuario ingrese una cantidad de triangulos inválida
		cout<<"La cantidad de triangulos debe ser mayor a cero"<<endl<<"Ingrese nuevamente la cantidad: ";
		cin>>n; 
	}

	do { //inicia el bucle para calcular el angulo faltante de la cantidad de triangulos definida
		cout<<endl<<"Triangulo "<<i<<endl<<"Ingrese el valor de uno de los angulos: ";
		cin>>ang1; //se pide el valor del angulo conocido (no el de 90 grados)
		
		while((ang1>=90)||(ang1<=0)){ //si el angulo proporcionado es 90 o más grados o menor a 0 grados, arroja un error
		
			cout<<endl<<"*****************************************"<<endl;
			cout<<"El valor del angulo debe ser menor a 90 grados y mayor a 0 grados"<<endl<<"Desea recibir una pequena explicacion acerca del tema?: "<<endl<<"1. Si"<<endl<<"2.No"<<endl<<"Opcion: ";
			cin>>exp; //pregunta al ususario si desea una explicación para que no vuelva a cometer el mismo error
			
			if(exp==1){ //Explicación
				cout<<"La suma de los angulos de cualquier triangulo debe ser igual a 180 grados, al ser un triangulo rectangulo (un angulo de noventa grados) la suma de sus dos angulos faltantes debe ser 90 grados, por lo tanto, ambos deben ser menores a 90 grados"<<endl; 
				cout<<"Ademas, el angulo debe ser mayor a cero."<<endl;
			}
			cout<<"*****************************************"<<endl;
			
			cout<<endl<<"Ingrese nuevamente el valor del angulo: "; //vuelve a pedir el valor del angulo
			cin>>ang1;
			
		} //si el error persiste, vuelve a notificar y a preguntar si se quiere una explicación

		ang2=180-(ang1+90); //calcula el angulo faltante

		cout<<"El valor del angulo faltante del triangulo "<<i<<" es: "<<ang2<<endl; //arroja el valor
		i++; //contador para saber cuantos triangulos van
	} while(i<=n); 
	
	return 0;
}