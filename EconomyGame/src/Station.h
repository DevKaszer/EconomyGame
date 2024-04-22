#pragma once
#include "Station.h"
#include <raylib.h>

class Station
{
public:
	Station();
	void Draw();
	void Update();
	void SetPos(Vector2 pos);
	void AddMoney(int amount);
	int amount;
private:
	Vector2 pos;
	Texture2D texture;
};
