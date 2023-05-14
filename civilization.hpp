#ifndef CIVILIZATION_HPP
#define CIVILIZATION_HPP

#include <string>

using namespace std;

class Civilization
{
    private:
        string nombre;
        int loc_x;
        int loc_y;
        double puntuacion;
    
    public:
        Civilization() {}
        Civilization(string& nombre,int loc_x,int loc_y, double puntuation) {
            this->nombre = nombre;
            this->loc_x = loc_x;
            this->loc_y = loc_y;
            this->puntuacion = puntuation;
        }
        
        void setNombre(string& valor) {
            nombre = valor;
        }
        string getNombre() {
            return nombre;
        }
        void setLocX(int valor) {
            loc_x = valor;
        }
        int getLocX() {
            return loc_x;
        }
        void setLocY(int valor) {
            loc_y = valor;
        }
        int getLocY() {
            return loc_y;
        }
        void setPuntuacion(int valor) {
            puntuacion = valor;
        }
        int getPuntuacion() {
            return puntuacion;
        }

        friend istream& operator>>(istream& is, Civilization& civilization) {
            cout << "Name: ";
            getline(cin, civilization.nombre);
            cout << "X Location: ";
            cin >> civilization.loc_x;
            cout << "Y Location: ";
            cin >> civilization.loc_y;
            cout << "Puntuation: ";
            cin >> civilization.puntuacion;
            return is;
        }
};

#endif