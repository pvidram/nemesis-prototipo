#include "Room.h"

std::string Describe(const Room& r) {
	return "[" + std::to_string(r.id) + "] " + r.name;
}