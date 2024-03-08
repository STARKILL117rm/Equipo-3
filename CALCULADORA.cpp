#include <iostream>
#include <cmath>
using namespace std;

void suma(float num1, float num2);
void resta(float num1, float num2);
void multiplicacion(float num1, float num2);
void division(float num1, float num2);
float raiz(float num1);
float exponente(float base, float exponente);

int main() {
    float num1, num2; // Cambiado a float para permitir decimales
    char menu;
    cout << "--> Menu de la calculadora <---" << endl;
    cout << "a) Suma" << endl;
    cout << "b) Resta" << endl;
    cout << "c) Multiplicacion" << endl;
    cout << "d) Division" << endl;
    cout << "e) Raiz Cuadrada" << endl;
    cout << "f) Exponente" << endl;
    cin >> menu;
    switch (menu) {
    case 'a':
        cout << "Dame el valor del numero 1: ";
        cin >> num1;
        cout << "Dame el valor del numero 2: ";
        cin >> num2;
        suma(num1, num2);
        break;
    case 'b':
        cout << "Dame el valor del numero 1: ";
        cin >> num1;
        cout << "Dame el valor del numero 2: ";
        cin >> num2;
        resta(num1, num2);
        break;
    case 'c':
        cout << "Dame el valor del numero 1: ";
        cin >> num1;
        cout << "Dame el valor del numero 2: ";
        cin >> num2;
        multiplicacion(num1, num2);
        break;
    case 'd':
        cout << "Dame el valor del numero 1: ";
        cin >> num1;
        cout << "Dame el valor del numero 2: ";
        cin >> num2;
        division(num1, num2);
        break;
    case 'e':
        cout << "Dame el valor del numero: ";
        cin >> num1;
        if (num1 < 0) {
            cout << "No se puede calcular la raíz cuadrada de un número negativo." << endl;
        } else {
            cout << "La raiz cuadrada de " << num1 << " es: " << raiz(num1) << endl;
        }
        break;
    case 'f':
        float base, exp;
        cout << "Dame el valor de la base: ";
        cin >> base;
        cout << "Dame el valor del exponente: ";
        cin >> exp;
        cout << "El resultado de " << base << " elevado a " << exp << " es: " << exponente(base, exp) << endl;
        break;
    default:
        cout << "Opción no válida." << endl;
        break;
    }
    return 0;
}

void suma(float num1, float num2) {
    float total;
    total = num1 + num2;
    cout << "El resultado es: " << total << endl; // Agregado un salto de línea al final
}

void resta(float num1, float num2) {
    float total;
    total = num1 - num2;
    cout << "El resultado es: " << total << endl; // Agregado un salto de línea al final
}

void multiplicacion(float num1, float num2) {
    float total;
    total = num1 * num2;
    cout << "El resultado final es: " << total << endl; // Agregado un salto de línea al final
}

void division(float num1, float num2) {
    if (num2 == 0) {
        cout << "No se puede dividir entre cero." << endl;
    } else {
        float total;
        total = num1 / num2;
        cout << "El resultado final es: " << total << endl; // Agregado un salto de línea al final
    }
}

float raiz(float num1) {
    return sqrt(num1);
}

float exponente(float base, float exponente) {
    return pow(base, exponente);
}
