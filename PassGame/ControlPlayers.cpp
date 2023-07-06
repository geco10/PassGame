#include "ControlPlayers.h"

//ControlPlayers::ControlPlayers(int b,sf::Vector2f position) {
//	players[count_active_players].push_back(b, position);
//}
void ControlPlayers::move(sf::Vector2f step){
	
	players[count_active_players]->switch_pos(step);
}
void ControlPlayers::draw(sf::RenderTarget& target, sf::RenderStates states)const {
	players[count_active_players]->draw(target,states);
}