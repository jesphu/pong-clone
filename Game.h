#ifndef GAME_H // This guarentees that the code is included only once in the game.
#define GAME_H

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class Game {
    public:
        // Objects declared static are allocated storage in static storage area, and have scope till the end of the program.
        static void start(); 
    private:
        static bool is_exiting();
        static void game_loop();
        //
        enum GameState {
            Uninitialized, ShowingSplash, Paused, ShowingMenu, Playing, Exiting
        }; // Represents the various states the game can be in. An enum is a user-defined type consisting of a set of named constants called enumerators. 
        //
        static GameState s_game_state;
        static sf::RenderWindow s_main_window;
};

#endif
