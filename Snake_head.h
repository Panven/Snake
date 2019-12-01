#pragma once
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
#include"Sizes.h"
#include"Point_er.h"
using namespace std;


class Snake_head :public Point_er
{
public:
    void load_snake_head(Sizes*sizes);
};
