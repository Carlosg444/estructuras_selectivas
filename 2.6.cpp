#include <iostream>
using namespace std;
//Funcion que calcula el pago final
float pagoFinal (float C){
	if (C>1000){
		return C*0.8;//Aplica el 20% de descuento
	}
	return C;
}
//Funcion que calcula el descuento
float descuento (float C){
	if (C>1000){
		return C*0.2;
	}
	return 0;
}

int main (){
	float C;
	//Entrada
	cout<<"Inserte el total de la compra: "<<endl;
	cin>>C;
	//Bucle que espera a que el usuario ingrese un numero valido y positivo
	while (C<0){
		cout<<"Error: el total de la compra no puede ser negativo, intentelo de nuevo"<<endl;
		cout<<"Inserte el total de la compra: "<<endl;
		cin>>C;
	}
	//Salida
	cout<<"El pago final es: "<<pagoFinal(C)<<endl;
	cout<<"El descuento es: "<<descuento(C)<<endl;
}
