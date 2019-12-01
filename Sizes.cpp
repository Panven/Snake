#include<iostream>
#include"Sizes.h"

using namespace std;

Sizes::Sizes(int h, int w)
{
    height=h;
    width=w;
}

Sizes::~Sizes()
{

}

void Sizes::load_sizes()
{
    cout<<"WCZYTAJ WYSOKOSC: "<<endl;
    cin>>height;
    cout<<"WCZYTAJ SZEROKOSC: "<<endl;
    cin>>width;
}

void Sizes::show_sizes()
{
    cout<<"WYSOKOSC: "<<height<<endl;
    cout<<"SZEROKOSC: "<<width<<endl;
}

