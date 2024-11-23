#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string>
using namespace std;

/**
 * Clase Libro
 * 
 * Representa un libro en una biblioteca, proporcionando métodos para obtener
 * y establecer detalles del libro, como su título, autor y estado (disponible o prestado).
 */
class Libro {
private:
    string titulo;  
    string autor;   
    bool estado;    // true: disponible, false: prestado

public:

    Libro(string _titulo, string _autor, bool _estado){
        titulo = _titulo;
        autor = _autor;
        estado = _estado;
    }

    /**
     * Obtiene el título del libro.
     * 
     * @return Título del libro.
     */
    string getTitulo() const {
        return titulo;
    }

    /**
     * Establece el título del libro.
     * 
     * @param titulo Título del libro.
     */
    void setTitulo(string titulo) {
        this->titulo = titulo;
    }

    /**
     * Obtiene el autor del libro.
     * 
     * @return Autor del libro.
     */
    string getAutor(){
        return autor;
    }

    /**
     * Establece el autor del libro.
     * 
     * @param autor Autor del libro.
     */
    void setAutor(string autor) {
        this->autor = autor;
    }

    /**
     * Obtiene el estado del libro.
     * 
     * @return Estado del libro (true si está disponible, false si está prestado).
     */
    bool getEstado(){
        return estado;
    }

    /**
     * Establece el estado del libro.
     * 
     * @param estado Estado del libro (true para disponible, false para prestado).
     */
    void setEstado(bool estado) {
        this->estado = estado;
    }

    /**
     * Representa el objeto Libro como una cadena.
     * 
     * @return Una cadena que representa el objeto.
     */
    string toString() const {
    return "Título: " + titulo + "\n" +
           "    Autor: " + autor + "\n" +
           "    Estado: " + (estado ? "Disponible" : "Prestado");
    }
};

#endif