#include "ControlPlayers.h"

ControlPlayers::ControlPlayers(int c) {
	for (int i = 0; i < c; i++){
		players.push_back(new Player);
	}
	players[active_players]->switch_bool();
}
ControlPlayers::~ControlPlayers() {
	for (int i = 0;players.size()!=0; i++) {
		delete players[i];
	}
}
void ControlPlayers::move(sf::Vector2f step){
	
	players[active_players]->switch_pos(step);
}
void ControlPlayers::draw(sf::RenderTarget& target, sf::RenderStates states)const {
	for(const Player* curr:players){
		target.draw(*curr);
	}
}
void ControlPlayers::nextPlayer() {
	players[active_players]->switch_bool();
	active_players = (active_players += 1) % players.size();
	players[active_players]->switch_bool();
}