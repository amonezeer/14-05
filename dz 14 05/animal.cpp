#include "animal.h"
#include <iostream>
using namespace std;

void Wildebeest::eatGrass() {
    cout << "Wildebeest is eating grass.\n";
}
void Bison::eatGrass() {
    cout << "Bison is eating grass.\n";
}
void Lion::eat(Herbivore* herbivore) {
    cout << "Lion is eating a herbivore.\n";
}
void Wolf::eat(Herbivore* herbivore) {
    cout << "Wolf is eating a herbivore.\n";
}
void Elk::eatGrass() {
    cout << "Elk is eating grass.\n";
}
void Tiger::eat(Herbivore* herbivore) {
    cout << "Tiger is eating a herbivore.\n";
}
