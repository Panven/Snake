#pragma once
#include<iostream>

using namespace std;

class Sizes
{
public:
    int height;
    int width;

    Sizes(int=10,int=10);
    ~Sizes();

    void load_sizes();
    void show_sizes();
};
