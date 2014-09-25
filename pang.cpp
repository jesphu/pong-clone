#include "Game.h"

int main(int argc, char** argv) { // A * token followed by another * token in this case is a pointer to a pointer. In this case, argv is a pointer to an array of char*. It is equivalent to (int argc, char* argv[]).
    Game::Start();

    return 0;
}
