#include "Inventory.h"
#include <iostream>

// 함수만
Inventory::Inventory(int capacity)
    : items(new Item[capacity]), capacity(capacity), itemCount(0)
{
}

// 나머지 함수들
Inventory::~Inventory() {
    delete[] items;
    std::cout << "Inventory has been destroyed." << std::endl;
}

bool Inventory::addItem(const Item& item) {
    if (itemCount >= capacity) return false;

    items[itemCount++] = item;
    Item::incrementTotalItems();
    std::cout << "An item was added: " << item.getName() << std::endl;
    return true;
}

void Inventory::display() const {
    std::cout << "Inventory (" << itemCount << "/" << capacity << "):" << std::endl;
    for (int i = 0; i < itemCount; i++) {
        std::cout << "  ";
        items[i].display();
    }
}