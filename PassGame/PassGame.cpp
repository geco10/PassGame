#include<SFML/Graphics.hpp>
#include"Player.h"
#include"ControlPlayers.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
    ControlPlayers players(20);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            sf::Vector2f step = { 0,0 };
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code ==sf::Keyboard::Up)
                {
                    step.y -= 5;
                }
                if (event.key.code == sf::Keyboard::Down)
                {
                    step.y += 5;
                }
                if (event.key.code == sf::Keyboard::Right)
                {
                    step.x += 5;
                }
                if (event.key.code == sf::Keyboard::Left)
                {
                    step.x -= 5;
                }
                if (event.key.code == sf::Keyboard::P)
                {
                    players.nextPlayer();
                }
                players.move(step);
            }
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(players);
        window.display();
    }

    return 0;
}
