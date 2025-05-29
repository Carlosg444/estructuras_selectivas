#include <iostream>
using namespace std;
int main (){
	float C, PF;
	cout<<"Inserte el total de la compra: "<<endl;
	cin>>C;
	if (C<0){
		cout<<"Error: el total de la compra no puede ser negativo."<<endl;
	}else if (C>1000){
			PF=C*0.8;
			cout<<"El pago final es: "<<PF<<endl;
	}else{
		PF=C;
		cout<<"El pago final es: "<<PF<<endl;
	}
}
