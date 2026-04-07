#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Inventory.h"
#include "Item.h"

class Player {
private:
    std::string name;
    int health;
    int maxHealth;
    int attackPower;
    Inventory inventory;

    int x;
    int y;

public:
    // Constructors
    Player();
    Player(std::string name, int health, int attackPower);
    Player(std::string name, int health); // for inventory

    // Destructor
    ~Player();

    // Methods
    void takeDamage(int damage);

    // Inventory related
    void showInventory() const;
    void addItem(const Item& item);

    // Getters
    std::string getName() const;
    int getHealth() const;
    int getMaxHealth() const;
    int getAttackPower() const;

    // Display
    void displayStatus() const;

    int getX() const;
    int getY() const; 

    void setX(int x);
    void setY(int y);

};

#endif