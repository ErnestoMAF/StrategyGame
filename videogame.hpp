#ifndef VIDEOGAME_HPP
#define VIDEOGAME_HPP

#include "civilization.hpp"
#include <vector>
#include <algorithm>

class Videogame
{
    private:
        string username;
        vector<Civilization> civilizations;
    public:
        void setNombre(const string& username);
        string getNombre();
        void addCivilization(Civilization &civilazation);
        void insertCivilization(Civilization &civilazation,size_t pos);
        void sortByName();
        void sortByLocX();
        void sortByLocY();
        void sortByPuntuation();
        void eraseByName(string& name);
        Civilization* findByName(string& name);
};

void Videogame::setNombre(const string& username){
        this->username = username;
}

string Videogame::getNombre() {
        return this->username;
}

void Videogame::addCivilization(Civilization &civilazation){
    civilizations.push_back(civilazation);
}
void Videogame::insertCivilization(Civilization &civilazation,size_t pos){
    if(pos>=civilizations.size())
        cout<<"Invalid position"<<endl;
    else
        civilizations.insert(civilizations.begin()+pos,civilazation);
}
void Videogame::sortByName(){
    if (civilizations.empty())
        cout<<"Empty civilizations"<<endl;
    else
        sort(civilizations.begin(),civilizations.end(),[](Civilization c1,Civilization c2){return c1.getNombre()<c2.getNombre();});
}
void Videogame::sortByLocX(){
    if (civilizations.empty())
        cout<<"Empty civilizations"<<endl;
    else
        sort(civilizations.begin(),civilizations.end(),[](Civilization c1,Civilization c2){return c1.getLocX()<c2.getLocX();});
}
void Videogame::sortByLocY(){
    if (civilizations.empty())
        cout<<"Empty civilizations"<<endl;
    else
        sort(civilizations.begin(),civilizations.end(),[](Civilization c1,Civilization c2){return c1.getLocY()<c2.getLocY();});
}
void Videogame::sortByPuntuation(){
    if (civilizations.empty())
        cout<<"Empty civilizations"<<endl;
    else
        sort(civilizations.begin(),civilizations.end(),[](Civilization c1,Civilization c2){return c1.getPuntuacion()<c2.getPuntuacion();});
}
void Videogame::eraseByName(string& name) {
    auto newEnd = std::remove_if(civilizations.begin(), civilizations.end(), [name](Civilization& c1) {return c1.getNombre() == name;});
    civilizations.erase(newEnd, civilizations.end());
}
Civilization* Videogame::findByName(string& name){
    auto it = find_if(civilizations.begin(),civilizations.end(),[name](Civilization c1){return c1.getNombre()==name;});
    if(it == civilizations.end())
        return nullptr;
    else
        return &(*it);
}

#endif