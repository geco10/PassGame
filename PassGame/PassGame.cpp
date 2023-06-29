#include<SFML/Graphics.hpp>
#include"Player.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
    Player player1;
    Player player2;
    int id;
    Player player3;
    player2.switch_bool();
    player1.switch_bool();
    player3.switch_bool();
    player1.switch_pos(sf::Vector2f(100, 200));
    player2.switch_pos(sf::Vector2f(200, 400));
    player3.switch_pos(sf::Vector2f(350, 200));
    player1.switch_bool();
    player3.switch_bool();
    id = 2;
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
                    if (id == 2) {
                        player2.switch_bool();
                        player3.switch_bool();
                        id += 1;
                    }
                    else
                        if (id == 3) {
                            player1.switch_bool();
                            player3.switch_bool();
                            id -= 2;
                        }
                        else
                            if (id == 1) {
                                player2.switch_bool();
                                player1.switch_bool();
                                id += 1;
                            }                       
                }
            }
            player1.switch_pos(step);
            player2.switch_pos(step);
            player3.switch_pos(step);
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(player1);
        window.draw(player2);
        window.draw(player3);
        window.display();
    }

    return 0;
}
