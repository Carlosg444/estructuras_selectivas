#include <iostream>
using namespace std;
int main (){
	float C, D, PF;
	cout<<"Inserte el total de la compra: "<<endl;
	cin>>C;
	if (C>1000){
		D=C*0.2;
		PF=C-D;
		cout<<"El pago final es: "<<PF<<endl;
	}else{
		PF=C;
		cout<<"El pago final es: "<<PF<<endl;
	}
	return 0;
}
