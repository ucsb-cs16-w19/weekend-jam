#include <iostream>
using namespace std;

struct Pokemon {
    string name;
    string type;
};

void print_pokemon( Pokemon p)
{
    cout << p.name << "(" << p.type << ")" << endl;
    return;
}

void print_dex(Pokemon dex[], int size) {

    for (int i = 0; i < size; i++)
    {
        print_pokemon(dex[i]);
        cout << "- - -" << endl;
    }
    return;
}

int main() {

    Pokemon pkmn1 = {"Pikachu", "Electric"};
    Pokemon pkmn2 = {"Charmander", "Fire"};

    Pokemon pokedex[] = {pkmn1, pkmn2};
    Pokemon* p_arr = new Pokemon[2];
    p_arr[0] = pkmn2; 
    p_arr[1] = pkmn1; 

    /*
    print_pokemon(pkmn1);
    print_pokemon(pkmn2);
    */
    //print_dex(pokedex, 2);
    print_dex(p_arr, 2);

    return 0;
}
