#include <iostream>
using namespace std;
float pagoFinal (float C){
	if (C>1000){
		return C*0.8;
	}
	return C;
}

int main (){
	float C;
	cout<<"Inserte el total de la compra: "<<endl;
	cin>>C;
	if (C<0){
		cout<<"Error: el total de la compra no puede ser negativo."<<endl;
	}else {
		cout<<"El pago final es: "<<pagoFinal(C)<<endl;
	}
}

