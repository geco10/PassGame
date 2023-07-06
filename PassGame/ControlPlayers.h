#pragma once
#include"Player.h"
#include<vector>
#include<SFML/Graphics.hpp>
class ControlPlayers :public sf::Drawable{
	std::vector<Player*>players;
	int active_players;
public:
	ControlPlayers(int c);
	~ControlPlayers();
	void move(sf::Vector2f step);
	virtual void draw(sf::RenderTarget& target,sf::RenderStates states)const override;
	void nextPlayer();
};