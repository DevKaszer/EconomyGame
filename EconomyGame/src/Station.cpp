#include "Station.h"

Station::Station() {
	texture = LoadTexture("assets/graphics/station.png");
	pos.x = 0;
	pos.y = 0;
	this->amount = 1;
}

void Station::Draw()
{
	DrawTexture(texture, pos.x, pos.y, WHITE);
}

void Station::Update()
{

}

void Station::SetPos(Vector2 pos)
{
	this->pos = pos;
}

void Station::AddMoney(int amount)
{
	this->amount = amount;
}
