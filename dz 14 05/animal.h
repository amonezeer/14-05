#ifndef ANIMAL_H
#define ANIMAL_H

class Herbivore {
public:
    virtual void eatGrass() = 0;
};
class Carnivore {
public:
    virtual void eat(Herbivore* herbivore) = 0;
};
class Wildebeest : public Herbivore {
public:
    void eatGrass() override;
};
class Bison : public Herbivore {
public:
    void eatGrass() override;
};
class Lion : public Carnivore {
public:
    void eat(Herbivore* herbivore) override;
};
class Wolf : public Carnivore {
public:
    void eat(Herbivore* herbivore) override;
};
class Elk : public Herbivore {
public:
    void eatGrass() override;
};
class Tiger : public Carnivore {
public:
    void eat(Herbivore* herbivore) override;
};

#endif