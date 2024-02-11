#include <iostream>
#include <cmath>

// Se declaran las funciones
double realizarOperacion(double num1, double num2, char operacion);
void imprimirResultado(double resultado);

int main() {
    // Se declaran los variables
    int cantidadOperaciones;
    double numero1, numero2, resultado;
    char operacion;

    // Se pide al usuario la cantidad de operaciones a realizar
    std::cout << "Ingrese la cantidad de operaciones a realizar: ";
    std::cin >> cantidadOperaciones;

    // Bucle para realizar operaciones seg�n la cantidad ingresada
    for (int i = 0; i < cantidadOperaciones; ++i) {
        // Se pide los datos al usuario
        std::cout << "Ingrese el primer numero: ";
        std::cin >> numero1;

        std::cout << "Ingrese la operaci�n (+, -, *, /, %): ";
        std::cin >> operacion;

        std::cout << "Ingrese el segundo numero: ";
        std::cin >> numero2;

        // Llamar a la funci�n para realizar la operaci�n
        resultado = realizarOperacion(numero1, numero2, operacion);

        // Llamar a la funci�n para imprimir los resultados
        imprimirResultado(resultado);
    }

    // Fin del programa
    return 0;
}

// Se implementa la funci�n para realizar operaciones matem�ticas
double realizarOperacion(double num1, double num2, char operacion) {
    double resultado;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            // Se verifica la divisi�n por cero
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                std::cout << "Error: No se puede dividir por cero." << std::endl;
                resultado = 0; // Se puede elegir otro valor o manejar el error de otra manera
            }
            break;
        case '%':
            // Se verifica la divisi�n por cero
            if (num2 != 0) {
                resultado = std::fmod(num1, num2);
            } else {
                std::cout << "Error: No se puede realizar el modulo por cero." << std::endl;
                resultado = 0; // Se puede elegir otro valor o manejar el error de otra manera
            }
            break;
        default:
            std::cout << "Operacion no valida." << std::endl;
            resultado = 0; // Se puede elegir otro valor o manejar el error de otra manera
    }

    return resultado;
}

// Implementaci�n de la funci�n para imprimir resultados
void imprimirResultado(double resultado) {
    std::cout << "El resultado es: " << resultado << std::endl;
}

