#include <iostream>
#include "Sizes.h"
#include "Game.h"
#include "Board.h"
#include "Fruit.h"
#include "Point_er.h"
#include "Snake.h"
#include "Snake_head.h"
#include "Snake_tail.h"
#include<windows.h>


using namespace std;

int main()
{
    srand(time(0));

    Board board;
    Fruit fruit;
    Sizes sizes;
    Snake_head snake_head;
    Snake_tail snake_tail;

    Game game;
    game.setup(&snake_head,&fruit,&sizes,&board);
    while(!game.gameover)
    {
        board.board_draw(&fruit,&snake_head,&snake_tail);
        game.input();
        game.logic(&snake_head,&fruit,&sizes,&snake_tail,&board);
		Sleep(20);
    }
    return 0;
}
