#include "Player.h"

Player::Player() {
	players.push_back(false);
}
void Player::switch_bool()
{
	b = !b;
}

void Player::switch_pos(sf::Vector2f pos)
{
	if (b) {
		this->pos.x += pos.x;
		this->pos.y += pos.y;
	}
}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	sf::CircleShape circle(10);
	circle.setFillColor(sf::Color(0, 0, 0, 0));
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(4);
	circle.setPosition(pos);
	target.draw(circle);
	if (b) {
		sf::CircleShape cir(3);
		cir.setFillColor(sf::Color::Blue);
		cir.setPosition(pos.x + 7, pos.y + 7);
		target.draw(cir);
	}
}
