#include "Usuario.h"
#include "Libro.h"

using namespace std;

/**
 * Clase Bibliotecario
 * 
 * Representa a un bibliotecario, heredando las características de un usuario.
 * Proporciona métodos para registrar nuevos libros en la biblioteca y 
 * cambiar el estado de los libros (por ejemplo, de disponible a no disponible).
 */
class Bibliotecario : public Usuario {
public:
    /**
     * Registra un nuevo libro en el sistema.
     * Solicita al bibliotecario el título y autor del libro,
     * luego lo agrega al vector de libros con un estado inicial de disponible.
     * 
     * @param books Referencia al vector de libros donde se almacenan los libros.
     * @return Id del nuevo libro.
     */
    int registrarLibro(vector<Libro>& books) override {
        string titulo, autor;

        cout << "-----Registro del libro-----" << endl;
        cout << "Ingrese el título del libro: ";
        cin.ignore(); 
        getline(cin, titulo);
        cout << "Ingrese el autor del libro: ";
        getline(cin, autor);

        books.emplace_back(titulo, autor, 1);

        cout << "Libro registrado exitosamente." << endl;

        return books.size();
    }

    /**
     * Cambia el estado de un libro a no disponible.
     * Verifica si el identificador del libro es válido antes de realizar el cambio.
     * 
     * @param books Referencia al vector de libros donde se almacenan los libros.
     * @param idBook Identificador del libro cuyo estado será cambiado.
     */
    void cambiarEstado(vector<Libro>& books, int idBook) {
        if (idBook < 0 || idBook >= books.size()) return;

        books[idBook].setEstado(0);
    }
};
