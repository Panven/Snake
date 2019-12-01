#include<iostream>
#include<windows.h>
#include <fstream>
#include <string>
#include"Board.h"

using namespace std;


void Board::getBest_score()
{
	fstream file;
	file.open("Data.txt", ios::in | ios::out);
	if (file.good())
	{
		string best_score_str;
		file >> best_score_str;
		this->best_score = atoi(best_score_str.c_str());
	}

}








void Board::board_draw(Fruit*fruit,Snake_head*snake_head,Snake_tail*snake_tail)
{
	fstream file;
	file.open("Data.txt", ios::in | ios::out);


    system("cls"); //system("clear");
    for (int i = 0; i < width+1; i++)
        cout << "#";
    cout << endl;

	getBest_score();
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";
            if (i == snake_head->y && j == snake_head->x)
                cout << "O";
            else if (i == fruit->y && j == fruit->x)
                cout << "F";
            else
            {
                bool print = false;
                for (int k = 0; k < snake_tail->ntail; k++)
                {
                    if (snake_tail->tailX[k] == j && snake_tail->tailY[k] == i)
                    {	
						cout << "o";
						/*
                        if(k%10==9)
                        {
                            cout<<"l";
                        }
                        if(k%10==0)
                        {
                            cout<<"y";
                        }
                        if(k%10==1)
                        {
                            cout<<"l";
                        }
                        if(k%10==2)
                        {
                            cout<<"s";
                        }
                        if(k%10==3)
                        {
                            cout<<"k";
                        }
                        if(k%10==4)
                        {
                            cout<<"i";
                        }
                        if(k%10==5)
                        {
                            cout<<"P";
                        }
                        if(k%10==6)
                        {
                            cout<<"e";
                        }
                        if(k%10==7)
                        {
                            cout<<"d";
                        }
                        if(k%10==8)
                        {
                            cout<<"a";
                        }
						*/

                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width+1; i++)
        cout << "#";
	cout << endl << "Wynik: " << this->score << endl;
	cout << "Najlepszy wynik: " << this->best_score << endl;
	if (this->score > this->best_score)
	{
		file << score;
	}
    cout << endl;
}
