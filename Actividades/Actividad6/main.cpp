#include <iostream>
#include <string>
#include "Libro.h"
#include "Lector.h"
#include "Bibliotecario.h"
using namespace std;

int main(){
    Lector* reader = new Lector();
    Bibliotecario* librarian = new Bibliotecario();
    vector<Libro> books;
    int opcion, idBook;

    do {
        cout << "\n----- MENU -----" << endl;
        cout << "1. Registrar libros" << endl;
        cout << "2. Prestar libros a lectores" << endl;
        cout << "3. Ver estado de los libros" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cout<<endl;

        switch (opcion) {
        case 1:
            idBook = librarian->registrarLibro(books);
            cout<<"El libro con id: " << idBook <<  " fue registrado." << endl;
            break;
        case 2:
            idBook = reader->registrarLibro(books);
            librarian->cambiarEstado(books,idBook);
            break;
        case 3:
        cout<<"----Estado de los libros-----"<<endl;
            for(Libro book: books){
                cout<<book.toString()<<endl;
            }
            break;
        case 4:
            cout << "Saliendo del programa. ¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}