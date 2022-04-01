#include<iostream>
using namespace std;

int main() {
	float prenda,vlr_prend,traje,acum;
	int opt,prend;
	
	acum=0;
	
	cout<<"A cual prenda le conoce el precio?"<<endl<<"1.Corbata"<<endl<<"2.Traje"<<endl<<"3.Cinturon"<<endl<<"4.Zapatos"<<endl<<"5.Camisa"<<endl<<"Opcion:";
	cin>>prend;
	
	while((prend<1)||(prend>5)){
	cout<<endl<<"Digite una opcion valida"<<endl;
	cout<<"A cual prenda le conoce el precio?"<<endl<<"1.Corbata"<<endl<<"2.Traje"<<endl<<"3.Cinturon"<<endl<<"4.Zapatos"<<endl<<"5.Camisa"<<endl<<"Opcion:";
	cin>>prend;
	}
	
	cout<<"Digite el valor de la prenda: ";
	cin>>vlr_prend;
	
	switch(prend){ //switch que calcula el valor del traje a partir de cualquier prenda
		case 1:
			traje=6*vlr_prend;
			break;
			
		case 2:
			traje= vlr_prend;
			break;
		
		case 3:
			traje= 5*vlr_prend;
			break;
			
		case 4:
			traje= 2*vlr_prend;
			break;
		
		case 5: 
			traje= 3*vlr_prend;
			break;
	}
	cout<<endl<<"traje "<<traje; //va bien
	
	cout<<"Llevara corbata?"<<endl<<"1.Si"<<endl<<"2.No"<<endl<<"Opcion: ";
	cin>>opt;
	if(opt==1){
		prenda=traje/6;
		acum=acum+prenda;
	} 
	cout<<endl<<prenda;
	cout<<endl<<acum;
	
	cout<<endl<<"Llevara traje?"<<endl<<"1.Si"<<endl<<"2.No"<<endl<<"Opcion: ";
	cin>>opt;
	if(opt==1){
		prenda=traje;
		acum=acum+prenda;
	}
	cout<<endl<<acum;
	
	cout<<endl<<"Llevara cinturon?"<<endl<<"1.Si"<<endl<<"2.No"<<endl<<"Opcion: ";
	cin>>opt;
	if(opt==1){
		prenda=traje/5;
		acum=acum+prenda;
	}
	cout<<endl<<acum;
	
	cout<<endl<<"Llevara zapatos?"<<endl<<"1.Si"<<endl<<"2.No"<<endl<<"Opcion: ";
	cin>>opt;
	if(opt==1){
		prenda=traje/2;
		acum=acum+prenda;
	}
	cout<<endl<<acum;
	
	cout<<endl<<"Llevara camisa?"<<endl<<"1.Si"<<endl<<"2.No"<<endl<<"Opcion: ";
	cin>>opt;
	if(opt==1){
		prenda=traje/3;
		acum=acum+prenda;
	}
	cout<<endl<<acum;
	
	cout<<"El valor total de tu atuendo ideal es: "<<acum;
	
	return 0;
}