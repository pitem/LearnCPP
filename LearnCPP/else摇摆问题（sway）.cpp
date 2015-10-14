//
//  else摇摆问题（sway）.cpp
//  LearnCPP
//
//  Created by 柳坤 on 15/10/12.
//  Copyright © 2015年 柳坤. All rights reserved.
//
#include <iostream>

#include "else摇摆问题（sway）.hpp"

using namespace std;

void else1(int x, int y)
{
if ( x < 10 )
if ( y > 10 )
cout << "******" << endl;
else
cout << "#####" << endl;
//    if ( y > 10 )
//    cout << "******" << endl;
//    else
//    cout << "#####" << endl;
cout << "$$$$" << endl;
}

void else2(int x, int y)
{

if ( x < 10 )
{
if ( y > 10 )
cout << "******" << endl;
}
else
{
cout << "#####" << endl;
cout << "$$$$" << endl;
}
}