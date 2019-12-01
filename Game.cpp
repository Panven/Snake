#include<iostream>
#include<conio.h>
#include "Game.h"
using namespace std;

Game::Game(bool boolen)
{
    gameover=boolen;
}
Game::~Game()
{

}

void Game::setup(Snake_head*snake_head,Fruit*fruit,Sizes*sizes,Board*board)
{	
	
    dir = STOP;
	board->score = 0;
    sizes->load_sizes();
    board->height=sizes->height;
    board->width=sizes->width;
    fruit->load_point(sizes);
    snake_head->load_snake_head(sizes);
}
void Game::logic(Snake_head*snake_head,Fruit*fruit,Sizes*sizes,Snake_tail*snake_tail,Board * board)
{
    int prevX = snake_tail->tailX[0];
    int prevY = snake_tail->tailY[0];
    int prev2X, prev2Y;
    snake_tail->tailX[0] = snake_head->x;
    snake_tail->tailY[0] = snake_head->y;
    for (int i = 1; i < snake_tail->ntail; i++)
    {
        prev2X = snake_tail->tailX[i];
        prev2Y = snake_tail->tailY[i];
        snake_tail->tailX[i] = prevX;
        snake_tail->tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir)
    {
    case LEFT:
        snake_head->x--;
        break;
    case RIGHT:
        snake_head->x++;
        break;
    case UP:
        snake_head->y--;
        break;
    case DOWN:
        snake_head->y++;
        break;
    default:
        break;
    }
    //if (snake_head->x > sizes->width || snake_head->x < 0 || snake_head->y > sizes->sheight || snake_head->y < 0)
      //gameover = true;
    if (snake_head->x >= sizes->width) snake_head->x = 0; else if (snake_head->x < 0) snake_head->x = sizes->width - 1;
    if (snake_head->y >= sizes->height) snake_head->y = 0; else if (snake_head->y < 0) snake_head->y = sizes->height - 1;

    for (int i = 0; i < snake_tail->ntail; i++)
        if (snake_tail->tailX[i] == snake_head->x && snake_tail->tailY[i] == snake_head->y)
            gameover = true;

    if (snake_head->x == fruit->x && snake_head->y == fruit->y)
    {
        fruit->x = rand() % sizes->width;
        fruit->y = rand() % sizes->height;
        snake_tail->ntail++;
		board->score += 10;
    }
}
void Game::input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameover = true;
            break;
        }
    }
}
