#include "Game.h"
#include <iostream>
#include <cctype>

using namespace std;

Game::Game()
    : player("Hero", 100, 10),
      gameMap(30, 15, &player),
      running(true)
{
    player.addItem(Item("Sword", 10));
    player.addItem(Item("Shield", 5));
}

Game::~Game() {}

void Game::run() {
    while (running) {
        cout << string(30, '\n');

        cout << "=== RPG ===" << endl;

        gameMap.draw();

        cout << "\nPos: (" << player.getX() << ", " << player.getY() << ")" << endl;
        cout << "WASD / Q: ";

        processInput();
    }
}

void Game::processInput() {
    char input;
    cin >> input;
    input = toupper(input);

    int newX = player.getX();
    int newY = player.getY();

    if (input == 'W') {
        newY--;}

    else if (input == 'S') {
        newY++;
    }

    else if (input == 'A') {
        newX--;
    }

    else if (input == 'D') {
        newX++;
    }
    
    else if (input == 'Q') {
        running = false;
        return;
    }

    if (!gameMap.isWall(newX, newY)) {
        player.setX(newX);
        player.setY(newY);
    }
}