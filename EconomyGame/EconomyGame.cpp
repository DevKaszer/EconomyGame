#include "EconomyGame.h"
#include "raylib.h"
#include "src/Game.h"

using namespace std;

int main(void)
{
    const int WIDTH = 960;
    const int HEIGHT = 540;

    InitWindow(WIDTH, HEIGHT, "Economy Game");

    SetTargetFPS(60);      

    Game game;

    while (!WindowShouldClose())   
    {
        game.Update();
        game.GameInput();
        BeginDrawing();
        ClearBackground(DARKBLUE);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();       
  
	return 0;
}
