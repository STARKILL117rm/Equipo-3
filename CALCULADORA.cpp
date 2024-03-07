
#include <iostream>
using namespace std;

void suma(float num1, float num2);
void resta(float num1, float num2);
void multiplicacion(float num1, float num2);
void division(float num1, float num2);
float Raiz(float num1);
main (){
	int num1,num2;
	char menu;
		cout<<"--> Menu de la calculadora <---"<<endl;
		cout<<"a) Suma"<<endl;
		cout<<"b) Resta"<<endl;
		cout<<"c) Multiplicacion"<<endl;
		cout<<"d) Division"<<endl;
		cout<<"e) Raiz Cuadrada"<<endl;
		cin>>menu;
		switch (menu){
		
			case 'a':
				cout<<"Dame el valor del numero 1: ";
				cin>>num1;
				cout<<"Dame el valor del numero 2: ";
				cin>>num2;
				suma(num1,num2);
				break;
			case 'b':
				cout<<"Dame el valor del numero 1: ";
				cin>>num1;
				cout<<"Dame el valor del numero 2: ";
				cin>>num2;
				resta(num1,num2);
				break;	
			case 'c':
       				cout<<"Dame el valor del numero 1: ";
	   			cin>>num1;
       				cout<<"Dame el valor del numero 2: ";
	   			cin>>num2;
       				multiplicacion(num1,num2);
	   			break;
			case 'd':
       				cout<<"Dame el valor del numero 1: ";
	   			cin>>num1;
       				cout<<"Dame el valor del numero 2: ";
	   			cin>>num2;
       				division(num1,num2);
	   			break;
			case 'e':
				cout<<"Dame el valor del numero: ";
				cin>>num1;
				Raiz(num1);
				    if (raiz == -1.0) {
        cout << "No se puede calcular la raíz cuadrada de un número negativo." << endl;
    } else {
        cout << "La raíz cuadrada de " << numero << " es: " << raiz << endl;
    }

    return 0;
}

				break;
		}
	}
}
//Funciones//
void suma(float num1, float num2){
	float total;
	total = num1 + num2;
	cout<<"El resultado es: "<<total;
}
void resta(float num1, float num2){
	float total;
	total = num1 - num2;
	cout<<"El resultado es: "<<total;
}
	void multiplicacion(float num1, float num2){
	float total;
 	total = num1 * num2;
	cout<<"El resultado final es:	"<<total;
}
void division(float num1, float num2){
	float total;
 	total = num1 / num2;
	cout<<"El resultado final es:	"<<total;
}
float Raiz(float num1) {
    if (numero < 0) {
        return -1.0;
    }

    float x0 = num1 / 2.0; 
    float x1;

    do {
        x1 = (x0 + num1 / x0) / 2.0;
    } while (abs(x1 - x0) >= 0.0001);

    return x1;
}
