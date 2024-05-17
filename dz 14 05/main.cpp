#include "animal_world.h"
#include "continent.h"
#include <iostream>
using namespace std;

int main() {
    AnimalWorld world;
    Continent* africa = new Africa();
    Continent* northAmerica = new NorthAmerica();
    Continent* eurasia = new Eurasia();

    cout << "Feeding herbivores in Africa:\n";
    world.mealsHerbivores(africa);
    cout << "Feeding herbivores in North America:\n";
    world.mealsHerbivores(northAmerica);
    cout << "Feeding herbivores in Eurasia:\n";
    world.mealsHerbivores(eurasia);
    cout << "Feeding carnivores in Africa:\n";
    world.nutritionCarnivores(africa);
    cout << "Feeding carnivores in North America:\n";
    world.nutritionCarnivores(northAmerica);
    cout << "Feeding carnivores in Eurasia:\n";
    world.nutritionCarnivores(eurasia);

    delete africa;
    delete northAmerica;
    delete eurasia;

    return 0;
}
