#include "Game.h"

Game::Game()
{
	font = LoadFont("assets/fonts/Roboto.ttf");
	money = 0;
	timer = 0.0f;
	time = 0;
	isRun = false;
}

Game::~Game()
{

}

void Game::Update() {
	timer += GetFrameTime();
	if (timer >= 0.5f) {
		time += 1;
		if (isRun) {
			money += 1;
		}
		timer = 0.0f;
	}
	SpawnStations();
}

void Game::Draw() {
	string moneyStr = to_string(money) + "$";
	string timeStr = to_string(time) + "s";
	for (auto& station : stations)
	{
		station.Draw();
	}
	DrawTextEx(font,timeStr.c_str(),{850,20}, 48, 2, WHITE);
	DrawTextEx(font,moneyStr.c_str(),{25,25},48,2, WHITE);
	DrawTextEx(font, "Zespawnuj skrzynke - E", {600,480}, 28, 2, WHITE);
}

void Game::GameInput()
{
	if (IsKeyReleased(KEY_E))
		SpawnStation();
	if (IsKeyDown(KEY_SPACE))
		isRun = true;
	else
		isRun = false;
}

void Game::SpawnStations()
{
	for (int i = 0; i < stations.size(); i++)
	{
		int x = 1 + i;
		float posX = 100 * x + 25;
		stations[i].SetPos({posX,50});
	}
}

void Game::SpawnStation()
{
	Station station;
	station.SetPos({125,50 });
	stations.push_back(station);
}
