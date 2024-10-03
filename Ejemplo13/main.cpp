#include "Persona.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL)); // Inicializar generador de números aleatorios

    vector<Persona> personas;
    vector<int> edadesDisponibles;

    // Crear un vector con edades únicas entre 18 y 27
    for (int i = 18; i <= 27; i++) {
        edadesDisponibles.push_back(i);
    }

    // Crear 10 personas con edades únicas
    for (int i = 0; i < 10; i++) {
        int indiceAleatorio = rand() % edadesDisponibles.size();
        int edad = edadesDisponibles[indiceAleatorio];

        // Eliminar la edad ya asignada para que no se repita
        edadesDisponibles.erase(edadesDisponibles.begin() + indiceAleatorio);

        // Crear una persona con la edad asignada y añadirla al vector
        Persona p(edad);
        personas.push_back(p);
    }

    // Mostrar la información de las 10 personas creadas
    for (size_t i = 0; i < personas.size(); i++) {
        cout << "Persona " << i + 1 << ":" << endl;
        personas[i].mostrar();
        cout << endl;
    }

    return 0;
}
