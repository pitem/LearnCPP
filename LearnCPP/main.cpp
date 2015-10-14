//
//  main.cpp
//  LearnCPP
//
//  Created by 柳坤 on 15/10/9.
//  Copyright © 2015年 柳坤. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

#include "code_primary_lib.hpp"
#include "else摇摆问题（sway）.hpp"

//void test1()
//{
//    cout << "hello world" << endl;
//}

int main(int argc, const char * argv[])
{
//    test1();
//    printPrincipal();
    
    int x, y;
    x = 9;
    y = 11;
    
//    else1(x, y);
    else2(x, y);
    cout << fixed << setw(4);
    cout << "x(" << x << "), y(" << y <<")" <<endl;
    
    x = 11;
    y = 9;
    
//    else1(x, y);
    else2(x, y);
    cout << fixed << setw(4);
    cout << "x(" << x << "), y(" << y <<")" <<endl;
}
