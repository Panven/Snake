#include<iostream>
#include"Point_er.h"
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

Point_er::Point_er(int x1, int y1)
{
    x=x1;
    y=y1;
}

Point_er::~Point_er()
{

}

void Point_er::load_point(Sizes*sizes)
{
    x=rand()%(sizes->width-1)+1;
    y=rand()%(sizes->height-1)+1;
}

void Point_er::show_point()
{
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
}
