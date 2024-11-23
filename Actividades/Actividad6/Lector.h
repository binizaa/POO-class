#ifndef Lector_H
#define Lector_H

#include "Usuario.h"
#include "Libro.h"
using namespace std;

/**
 * Clase Lector
 * 
 * Representa a un lector que hereda de la clase Usuario.
 * Permite al lector interactuar con la lista de libros disponibles,
 * seleccionando un libro para su préstamo.
 */
class Lector : public Usuario {
private:
    vector<Libro> librosPrestado;

public:
    /**
     * Permite al lector seleccionar un libro para prestamo.
     * 
     * @param books Referencia al vector de libros registrados en el sistema.
     * @return El índice del libro seleccionado (si es válido) o -1 en caso contrario.
     */
    int registrarLibro(vector<Libro>& books) override {
        if (books.empty()) {
            cout << "No hay libros registrados." << endl;
            return -1;
        }

        cout << "--- Lista de Libros ---" << endl;
        for (size_t i = 0; i < books.size(); ++i) {
            cout << i + 1 << ". " << books[i].toString()<<endl;
        }

        cout << "\nSeleccione el número del libro que desea: ";
        int opc;
        cin >> opc;
        cout << endl;

        if (opc < 1 || opc > books.size()) {
            cout << "Opción inválida." << endl;
            return -1;
        }

        if (books[opc - 1].getEstado()) {
            cout << "El libro " << books[opc - 1].getTitulo() << " acaba de ser prestado." << endl;
        } else {
            cout << "El libro ya está prestado. No puede seleccionarlo." << endl;
        }

        return opc - 1;
    }
};

#endif
