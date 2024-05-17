#include "animal.h"
#include <iostream>
using namespace std;

Wildebeest::Wildebeest() : weight(100), life(true) {}

void Wildebeest::eatGrass() {
    weight += 10;
    cout << "Wildebeest is eating grass. Weight: " << weight << "\n";
}

int Wildebeest::getWeight() const {
    return weight;
}

bool Wildebeest::isAlive() const {
    return life;
}

void Wildebeest::setAlive(bool alive) {
    life = alive;
}

Bison::Bison() : weight(150), life(true) {}

void Bison::eatGrass() {
    weight += 10;
    cout << "Bison is eating grass. Weight: " << weight << "\n";
}

int Bison::getWeight() const {
    return weight;
}

bool Bison::isAlive() const {
    return life;
}

void Bison::setAlive(bool alive) {
    life = alive;
}

Lion::Lion() : power(100) {}

void Lion::eat(Herbivore* herbivore) {
    if (herbivore->isAlive() && power > herbivore->getWeight()) {
        power += 10;
        herbivore->setAlive(false);
        cout << "Lion ate a herbivore. New power: " << power << "\n";
    }
    else {
        power -= 10;
        cout << "Lion failed to eat a herbivore. New power: " << power << "\n";
    }
}

int Lion::getPower() const {
    return power;
}

void Lion::setPower(int power) {
    this->power = power;
}

Wolf::Wolf() : power(80) {}

void Wolf::eat(Herbivore* herbivore) {
    if (herbivore->isAlive() && power > herbivore->getWeight()) {
        power += 10;
        herbivore->setAlive(false);
        cout << "Wolf ate a herbivore. New power: " << power << "\n";
    }
    else {
        power -= 10;
        cout << "Wolf failed to eat a herbivore. New power: " << power << "\n";
    }
}

int Wolf::getPower() const {
    return power;
}

void Wolf::setPower(int power) {
    this->power = power;
}

Elk::Elk() : weight(200), life(true) {}

void Elk::eatGrass() {
    weight += 10;
    cout << "Elk is eating grass. Weight: " << weight << "\n";
}

int Elk::getWeight() const {
    return weight;
}

bool Elk::isAlive() const {
    return life;
}

void Elk::setAlive(bool alive) {
    life = alive;
}

Tiger::Tiger() : power(120) {}

void Tiger::eat(Herbivore* herbivore) {
    if (herbivore->isAlive() && power > herbivore->getWeight()) {
        power += 10;
        herbivore->setAlive(false);
        cout << "Tiger ate a herbivore. New power: " << power << "\n";
    }
    else {
        power -= 10;
        cout << "Tiger failed to eat a herbivore. New power: " << power << "\n";
    }
}

int Tiger::getPower() const {
    return power;
}

void Tiger::setPower(int power) {
    this->power = power;
}
