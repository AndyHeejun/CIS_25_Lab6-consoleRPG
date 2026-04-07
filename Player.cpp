#include "Player.h"
#include <iostream>

using namespace std;

// Default constructor
Player::Player()
    : name("Hero"), health(100), maxHealth(100), attackPower(10), inventory(5), x(0), y(0)
{
    cout << "Default constructor called." << endl;
}

// Constructor (name, health)
Player::Player(string name, int health)
    : name(name), health(health), maxHealth(health), attackPower(10), inventory(5), x(0), y(0)
{
    cout << "Player constructor (name, health) called." << endl;
}

// Constructor (name, health, attackPower)
Player::Player(string name, int health, int attackPower)
    : name(name), health(health), maxHealth(health), attackPower(attackPower), inventory(5), x(0), y(0)
{
    cout << "Overloaded constructor called." << endl;
}

// Destructor
Player::~Player() {
    cout << "Player " << name << " has been destroyed." << endl;
}


// takeDamage
void Player::takeDamage(int damage) {
    health -= damage;

    if (health < 0) {
        health = 0;
    }

    if (health == 0) {
        cout << name << " falls to the ground, defeated." << endl;
    }
}

// Inventory functions
void Player::showInventory() const {
    inventory.display();
}

void Player::addItem(const Item& item) {
    if (inventory.addItem(item)) {
        cout << name << " found a ";
        item.display();
    }
}

// Getters
string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

int Player::getMaxHealth() const {
    return maxHealth;
}

int Player::getAttackPower() const {
    return attackPower;
}

// displayStatus
void Player::displayStatus() const {
    cout << "[" << name << "] - HP: "
         << health << "/" << maxHealth << endl;
}


int Player::getX() const { return x; }
int Player::getY() const { return y; }

void Player::setX(int x) { this->x = x; }
void Player::setY(int y) { this->y = y; }
