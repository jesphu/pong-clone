#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SplashScreen.h"

void SplashScreen::show(sf::RenderWindow & renderWindow) {
    sf::Image image;
    if(image.loadFromFile("images/SplashScreen.png") != true) {
        return;
    }

    sf::Sprite sprite(image);

    renderWindow.draw(sprite);
    renderWindow.display();

    sf::Event event;
    while(true) {
        while(renderWindow.pollEvent(event)) {
            if(event.type == sf::Event::EventType::KeyPressed) || event.type == sf::EventType::MouseButtonPressed || event.type == sf::Event::EventType::Closed) {
                return;
            }
        }
    }
}
