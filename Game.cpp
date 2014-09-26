#include "Game.h"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

void Game::start() {
    if (s_game_state != Uninitialized) {
        return;
    }

    s_main_window.create(sf::VideoMode(1024, 768, 32), "Pang!");
    s_game_state = Game::Playing;

    while(!is_exiting()) {
        game_loop();
    }

    s_main_window.close();
}

bool Game::is_exiting() {
    if (s_game_state == Game::Exiting) {
        return true;
    } else {
        return false;
    }
}

void Game::game_loop() {
    sf::Event currentEvent;
    while(s_main_window.pollEvent(currentEvent)) {
        switch(s_game_state) {
            case Game::Playing: 
                {
                    s_main_window.clear(sf::Color(255, 0, 0));
                    s_main_window.display();
                }

                if(currentEvent.type == sf::Event::Closed) {
                    s_game_state = Game::Exiting;
                }
                break;
        }
    }

}

Game::GameState Game::s_game_state = Uninitialized;
sf::RenderWindow Game::s_main_window;
