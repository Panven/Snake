#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
#include"Snake_head.h"
using namespace std;


void Snake_head::load_snake_head(Sizes*sizes)
{
    x=(sizes->width)/2;
    y=(sizes->height)/2;
}
