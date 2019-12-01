#pragma once
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
#include"wymiary.h"
using namespace std;

class Point_er
{
public:
    int x;
    int y;

    Point_er(int=0,int=0);
    ~Point_er();

    void load_point(Sizes*sizes);
    void show_point();
};
