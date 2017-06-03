#pragma once
#include "Map.hh"
#include "Input.inl.hh"
#include <queue>
#include <map>
#include <string>

struct Entio
{
	char name;
	int fatigue;
	int life;
	int arrow;
	bool operator()(const Entio &a, const Entio &b) //poder comparar fatigues
	{
		if (a.fatigue > b.fatigue) return true; return false;
	};
};

class Player
{
private:
	Map *map;
	int x, y, action, numEntios;
	std::priority_queue<Entio, std::vector<Entio>, Entio> pq;
	std::map<std::string, Entio> entios;
public:
	Player(Map *map2, int numPlayer);
	void movePlayer(enti::InputKey button);
	bool allDead();
	void addFatigue(char name, int numF);
};