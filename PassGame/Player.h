#pragma once
#include<SFML/Graphics.hpp>
class Player :public sf::Drawable       
{
	bool b=false;
	sf::Vector2f pos={0,0};
public:
	Player();
	void switch_bool();
	void switch_pos(sf::Vector2f pos);
	void draw(sf::RenderTarget& target, sf::RenderStates states)const override;
};