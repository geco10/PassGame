#pragma once
#include"Player.h"
#include<vector>
#include<SFML/Graphics.hpp>
class ControlPlayers :public sf::Drawable{
	std::vector<Player*>players;
	int count_active_players;
public:
	ControlPlayers(bool b,sf::Vector2f position);
	void move(sf::Vector2f step);
	virtual void draw(sf::RenderTarget& target,sf::RenderStates states)const override;

};