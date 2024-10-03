#include "Persona.hpp"
#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

Persona::Persona(int edad) {
    this->edad = edad;

    genero = rand() % 2;

    const char letrasDNI[] = "TRWAGMYFPDXBNJZSQVHLCKE"; 
    int numeroDNI = rand() % 100000000;  
    char letraDNI = letrasDNI[numeroDNI % 23];  

    snprintf(dni, 10, "%08d%c", numeroDNI, letraDNI); 
}

Persona::~Persona() {
    // Destructor vacío
}

int Persona::getEdad() {
    return edad;
}

bool Persona::esMujer() {
    return genero;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::mostrar() {
    cout << "Edad: " << edad << endl;
    cout << "Genero: " << (genero ? "Mujer" : "Hombre") << endl;
    cout << "DNI: " << dni << endl;
}
