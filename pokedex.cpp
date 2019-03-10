#include <iostream>
using namespace std;

struct Pokemon {
    string name;
    string type;
    Pokemon* link;
};

struct Pokedex {
    Pokemon* first;
    Pokemon* last;
};

void print_pokemon( Pokemon p)
{
    cout << p.name << " (" << p.type << ")" << endl;
    return;
}

void print_dex(const Pokedex* d) {
    Pokemon *tmp = NULL;

    if (d == NULL) {
        cout << "The deck is empty!" << endl;
        exit(-1);
    }

    //for ( ;   ; )
    if (d->first != NULL)
    {
        tmp = d->first;
    }
    while ( tmp != NULL )
    {
        print_pokemon( *(tmp) );
        cout << "- - -" << endl;
        tmp = tmp->link;
    }
    cout << "That's it!" << endl;
    return;
}

int main() {

    Pokemon pkmn1 = {"Pikachu", "Electric", NULL};
    Pokemon pkmn2 = {"Charmander", "Fire", NULL};
    //Pokedex* my_dex = NULL;
    Pokedex* my_dex = new Pokedex; 
    //print_dex(my_dex);

    //*my_dex = new Pokedex;
    my_dex->first = NULL;
    my_dex->last = NULL;

    my_dex->first = &pkmn1;
    my_dex->last = &pkmn2;
    (my_dex->first)->link = my_dex->last;

    (my_dex->last)->link = new Pokemon; // {"Bulbausar", "Grass", NULL};

    Pokemon *last = (my_dex->last)->link;
    last->name = "Bulbausar";
    last->type = "Grass";
    last->link = NULL;


    print_dex(my_dex);
    return 0;
}
