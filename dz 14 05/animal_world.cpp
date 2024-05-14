#include "animal_world.h"
#include "continent.h"
#include "animal.h"

void AnimalWorld::mealsHerbivores(Continent* continent) {
    Herbivore* herbivore = continent->createHerbivore();
    herbivore->eatGrass();
    delete herbivore;
}

void AnimalWorld::nutritionCarnivores(Continent* continent) {
    Carnivore* carnivore = continent->createCarnivore();
    Herbivore* herbivore = continent->createHerbivore();
    carnivore->eat(herbivore);
    delete carnivore;
    delete herbivore;
}
