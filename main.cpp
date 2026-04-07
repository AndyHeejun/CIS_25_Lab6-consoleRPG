#include "Game.h"
#include <iostream>

using namespace std;

int main() {
    try {
        Game game;
        game.run();
    }
    catch (...) {
        cout << "Error occurred!" << endl;
    }

    return 0;
}