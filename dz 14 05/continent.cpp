#include "continent.h"
#include "animal.h"

Herbivore* Africa::createHerbivore() {
    return new Wildebeest();
}
Carnivore* Africa::createCarnivore() {
    return new Lion();
}
Herbivore* NorthAmerica::createHerbivore() {
    return new Bison();
}
Carnivore* NorthAmerica::createCarnivore() {
    return new Wolf();
}
Herbivore* Eurasia::createHerbivore() {
    return new Elk();
}
Carnivore* Eurasia::createCarnivore() {
    return new Tiger();
}
