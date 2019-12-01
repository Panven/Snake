#include <iostream>
#include"wymiary.h"
#include"fruit.h"
#include"punkt.h"
#include"board.h"
#include"snaketail.h"
#include"gierka.h"
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
    game.setup(&snake_head,&fruit,&sizes/*,&board*/);
    while(!game.gameover)
    {
        board.board_draw(&fruit,&snake_head,&snake_tail/*,&game*/);
        game.input();
        game.logic(&snake_head,&fruit,&sizes,&snake_tail);
        Sleep(20);
    }
    return 0;
}
