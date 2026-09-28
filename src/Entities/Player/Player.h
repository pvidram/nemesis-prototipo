#pragma once

#include <algorithm>
#include <iostream>

struct Player { int health; };

bool IsDead(const Player& p);
void Damage(Player& p, int amount);