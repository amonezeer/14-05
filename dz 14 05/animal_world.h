#ifndef ANIMAL_WORLD_H
#define ANIMAL_WORLD_H

#include "continent.h"

class AnimalWorld {
public:
    void mealsHerbivores(Continent* continent);
    void nutritionCarnivores(Continent* continent);
};

#endif
