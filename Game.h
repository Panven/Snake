#pragma once
#include<conio.h>
#include<iostream>
#include "Snake_head.h"
#include "Snake_tail.h"
#include "Fruit.h"
#include "Sizes.h"
#include "Board.h"
using namespace std;


class Game
{
public:
    enum eDirection {STOP=0,LEFT,RIGHT,UP,DOWN};
    eDirection dir;
    bool gameover;
	//int score;
    Game(bool=false);
    ~Game();

    void setup(Snake_head*snake_head,Fruit*fruit,Sizes*sizes,Board*board);
    void logic(Snake_head*snake_head,Fruit*fruit,Sizes*sizes,Snake_tail*snake_tail,Board*board);
    void input();
};
