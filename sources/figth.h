#include <math.h>
#include <Windows.h>
#include "trade.h"
// стр Игрока
// стр Врага

// Боевка
// Перемещение

struct Enemy {
	int x;
	int y;
	int hp;
	int default_attack;
};

void setPlayer(Player* setspawn, Player* sethp, Player* setarmor, int dx, int dy, int dhp);

void movePlayer(Player* player);

void FigthPlayer(Player* php, Enemy* ehp); //php-хп игрока ehp хп врага
