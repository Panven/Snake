#pragma once
#include<iostream>
#include"wymiary.h"
#include"fruit.h"
#include"snakehead.h"
#include"snaketail.h"
#include"gierka.h"

using namespace std;

class Board :public Sizes
{
public:
    void board_draw(Fruit*fruit,Snake_head*snake_head,Snake_tail*snake_tail/*,Game*game*/);
};
