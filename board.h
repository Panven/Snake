#pragma once
#include<iostream>
#include "Snake_head.h"
#include "Fruit.h"
#include "Snake_tail.h"
using namespace std;

class Board :public Sizes
{
public:
	int score;
	int best_score;
    void board_draw(Fruit*fruit,Snake_head*snake_head,Snake_tail*snake_tail);
	void getBest_score();
};
