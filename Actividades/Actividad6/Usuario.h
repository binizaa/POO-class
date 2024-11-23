#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
using namespace std;

/**
 * Clase abstracta Usuario
 * 
 * Representa un usuario con un nombre de usuario y una contraseña. 
 */
class Usuario {
protected:
    string usuario;      
    string contrasena;   

public:

    // pure virtual function
    virtual int registrarLibro(vector<Libro>& books) = 0;

    /**
     * Obtiene el nombre del usuario.
     * 
     * @return Nombre del usuario.
     */
    string getUsuario() {
        return usuario;
    }

    /**
     * Establece el nombre del usuario.
     * 
     * @param usuario Nombre del usuario.
     */
    void setUsuario(string usuario) {
        this->usuario = usuario;
    }

    /**
     * Obtiene la contraseña del usuario.
     * 
     * @return Contraseña del usuario.
     */
    string getContrasena() {
        return contrasena;
    }

    /**
     * Establece la contraseña del usuario.
     * 
     * @param contrasena Contraseña del usuario.
     */
    void setContrasena(string contrasena) {
        this->contrasena = contrasena;
    }
};

#endif