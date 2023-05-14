#include <iostream>
#include "civilization.hpp"
#include "videogame.hpp"
enum OPCS_MENU {QUIT = 0, 
                USERNAME, 
                ADD_CIVILIZATION,
                INSERT_CIVILIZATION,
                SORT, 
                ERASE_CIVILIZATION,
                SEARCH,
                MODIFY,
                RESUME};
int main()
{
    Videogame videogame;
    int op;
    while (true) {
        cout << "Videogame Menu:" << endl;
        cout << "1. Create username" << endl;
        cout << "2. Add civilization" << endl;
        cout << "3. Insert civilization" << endl;
        cout << "4. Sort civilization" << endl;
        cout << "5. Erase civilization" << endl;
        cout << "6. Search civilization" << endl;
        cout << "7. Modify civilization" << endl;
        cout << "8. Resume" << endl;
        cout << "0. Quit" << endl;
        cout << "Opcion: ";
        cin >> op;
        cin.ignore();
        system("cls"); 

    return 0;
}
