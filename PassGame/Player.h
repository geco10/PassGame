#pragma once
#include<SFML/Graphics.hpp>
class Player :public sf::Drawable       
{
	bool b=false;
	int id;
	sf::Vector2f pos={0,0};
public:
	void switch_bool();
	void switch_pos(sf::Vector2f pos);
	void draw(sf::RenderTarget& target, sf::RenderStates states)const override;
};