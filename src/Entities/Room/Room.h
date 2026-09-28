#pragma once

#include <string>

struct Room { int id; std::string name; };

std::string Describe(const Room& r);