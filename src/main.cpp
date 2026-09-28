#include "raylib.h"

#include "Entities/Player/Player.h"
#include "Entities/Room/Room.h"

int main() {
	InitWindow(1280, 720, "Nemesis");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(DARKGRAY);
		DrawText("Bienvenido a Nemesis!", 190, 200, 20, RAYWHITE);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}