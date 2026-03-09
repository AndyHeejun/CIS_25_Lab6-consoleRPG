#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int health;
    int maxHealth;
    int attackPower;

public:
    // Constructors
    Player();
    Player(std::string name, int health, int attackPower);

    // Destructor
    ~Player();

    // Methods
    void takeDamage(int damage);

    // Getters
    std::string getName() const;
    int getHealth() const;
    int getMaxHealth() const;
    int getAttackPower() const;

    // Display
    void displayStatus() const;
};

#endif