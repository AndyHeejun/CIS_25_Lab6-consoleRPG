#include <iostream>
#include "Player.h"

using namespace std;

int main() {

    // Create players
    Player hero;
    Player wizard("Gandalf", 120, 15);

    cout << endl;
    cout << "--- Initial Status ---" << endl;
    hero.displayStatus();
    wizard.displayStatus();

    cout << endl;
    cout << "--- Hero takes damage! ---" << endl;
    hero.takeDamage(25);
    hero.displayStatus();

    cout << endl;
    cout << "--- Wizard takes damage! ---" << endl;
    wizard.takeDamage(150);
    wizard.displayStatus();

    Item sword("Sword", 10);
    Item shield("Shield", 15);
    Item potion("Potion", 5);

    cout << "\n--- Adding items to hero's inventory ---\n";

    hero.addItem(sword);
    hero.addItem(shield);

    cout << "\n--- Hero's Inventory ---\n";
    hero.showInventory();

    cout << "\nTotal items added to inventories: " << Item::getTotalItems() << endl;

              
    return 0;
}