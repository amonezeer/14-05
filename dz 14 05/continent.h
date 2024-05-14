#ifndef CONTINENT_H
#define CONTINENT_H

#include "animal.h"

class Continent {
public:
    virtual Herbivore* createHerbivore() = 0;
    virtual Carnivore* createCarnivore() = 0;
};
class Africa : public Continent {
public:
    Herbivore* createHerbivore() override;
    Carnivore* createCarnivore() override;
};
class NorthAmerica : public Continent {
public:
    Herbivore* createHerbivore() override;
    Carnivore* createCarnivore() override;
};
class Eurasia : public Continent {
public:
    Herbivore* createHerbivore() override;
    Carnivore* createCarnivore() override;
};

#endif