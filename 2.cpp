#include <iostream>
using namespace std;
int main (){
	
	float Cantidad, Descuento, Precio_Final;
	char opcion;
	cout << "========================================" << endl;
	cout << "       BIENVENIDO A MI PROGRAMA!" << endl;
	cout << "========================================" << endl;
	do {
		cout<<"\nInserte el total de la compra: "<<endl;
		cin>>Cantidad;
		
		if (Cantidad > 1000){
		
			Descuento = Cantidad * 0.2;
			Precio_Final = Cantidad - Descuento;
		
			cout << "El pago final es: " << Precio_Final << endl;
		
		}else{
		
			Precio_Final = Cantidad;
		
			cout << "El pago final es: " << Precio_Final << endl;
		}
		
		cout << "\nDesea seguir ingresando datos?" << endl;
		cin >> opcion;
		
	}while(opcion == 's' || opcion == 'S');
	
	cout << "\nGRACIAS POR USAR MI PROGRAMA <3!" << endl;
	return 0;
}
