// Programa para identificar el tipo de triángulo según los números ingresados
#include <iostream>

using namespace std;

int main() {
    
        int lado1, lado2, lado3;
    
        // Inicio :3
        cout << "Bienvenido :D" << endl;
        cout << "---------------" << endl;
    
        // Ingreso de valores de los lados :p
        cout << "Ingrese el primer número:..." << endl;
        cin >> lado1;
        cout << "Ingrese el segundo número:..." << endl;
        cin >> lado2;
        cout << "Ingrese el tercer número:..." << endl;
        cin >> lado3;
    
        // Condiciones para determinar el tipo de triángulo
        bool todos_iguales = (lado1 == lado2 && lado2 == lado3 && lado3 == lado1);
        bool dos_iguales = (lado1 == lado2 && lado3 != lado1) || 
                           (lado1 == lado3 && lado2 != lado3) || 
                           (lado2 == lado3 && lado1 != lado3);
        bool mayor_a_0 = (lado1 > 0 && lado2 > 0 && lado3 > 0);
        bool mayor_a_xlado = (lado1 + lado2 > lado3 && 
                              lado2 + lado3 > lado1 && 
                              lado3 + lado1 > lado2);
        bool todos_distintos = (lado1 != lado2 && lado2 != lado3 && lado3 != lado1);

        if (todos_iguales && mayor_a_0) {
            cout << "Es un triángulo Equilátero" << endl;
            cout << endl;
        } else if (dos_iguales && mayor_a_0 && mayor_a_xlado) {
            cout << "Es un triángulo Isósceles" << endl;
            cout << endl;
        } else if (mayor_a_0 && mayor_a_xlado && todos_distintos) {
            cout << "Es un triángulo Escaleno" << endl;
            cout << endl;
        } else {
            cout << "Error: Los números ingresados no forman un triángulo" << endl;
            cout << endl;
        }
    
    // Fin del programa:P
    return 0;
}
