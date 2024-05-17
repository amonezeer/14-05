#ifndef ANIMAL_H
#define ANIMAL_H

class Herbivore {
public:
    virtual void eatGrass() = 0;
    virtual int getWeight() const = 0;
    virtual bool isAlive() const = 0;
    virtual void setAlive(bool alive) = 0;
    virtual ~Herbivore() = default;
};

class Carnivore {
public:
    virtual void eat(Herbivore* herbivore) = 0;
    virtual int getPower() const = 0;
    virtual void setPower(int power) = 0;
    virtual ~Carnivore() = default;
};

class Wildebeest : public Herbivore {
private:
    int weight;
    bool life;
public:
    Wildebeest();
    void eatGrass() override;
    int getWeight() const override;
    bool isAlive() const override;
    void setAlive(bool alive) override;
};

class Bison : public Herbivore {
private:
    int weight;
    bool life;
public:
    Bison();
    void eatGrass() override;
    int getWeight() const override;
    bool isAlive() const override;
    void setAlive(bool alive) override;
};

class Lion : public Carnivore {
private:
    int power;
public:
    Lion();
    void eat(Herbivore* herbivore) override;
    int getPower() const override;
    void setPower(int power) override;
};

class Wolf : public Carnivore {
private:
    int power;
public:
    Wolf();
    void eat(Herbivore* herbivore) override;
    int getPower() const override;
    void setPower(int power) override;
};

class Elk : public Herbivore {
private:
    int weight;
    bool life;
public:
    Elk();
    void eatGrass() override;
    int getWeight() const override;
    bool isAlive() const override;
    void setAlive(bool alive) override;
};

class Tiger : public Carnivore {
private:
    int power;
public:
    Tiger();
    void eat(Herbivore* herbivore) override;
    int getPower() const override;
    void setPower(int power) override;
};

#endif 
