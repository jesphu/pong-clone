#pragma once // This guarantees that the code is included only once in the game.
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

class Game {
    public:
        // Objects declared static are allocated storage in static storage area, and have scope till the end of the program.
        static void Start(); 
    private:
        static bool IsExiting();
        static void GameLoop();

        enum GameState {
            Uninitialized, ShowingSplash, Paused, ShowingMenu, Playing, Exiting
        }; // Represents the various states the game can be in. An enum is a user-defined type consisting of a set of named constants called enumerators. 

        static GameState _gameState;
        static sf::RenderWindow _mainWindow;
};
