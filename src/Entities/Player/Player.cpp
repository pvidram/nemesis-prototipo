#include "Player.h"

bool IsDead(const Player& p) {
	return p.health <= 0;
}

void Damage(Player& p, int amount) {
	std::cout << "Jugador herido con " << amount << "puntos de daño.\n";
	p.health = std::max(0, p.health - amount);
	if (IsDead(p)) {
		std::cout << "Jugador muerto.\n";
		p.health = 0;
	}
}