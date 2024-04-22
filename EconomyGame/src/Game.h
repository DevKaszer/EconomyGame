#pragma once
#include "Station.h"
#include <iostream>
#include <string>
#include <vector>
#include <raylib.h>

using namespace std;

class Game
{
public:
	Game();
	~Game();
	void Update();
	void Draw();
	void GameInput();
	void SpawnStations();
	void SpawnStation();
	bool isRun;
private:
	Font font;
	vector<Station> stations;
	int money;
	float timer;
	int time;
};
