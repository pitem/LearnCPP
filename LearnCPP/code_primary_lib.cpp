//
//  code_primary_lib.cpp
//  LearnCPP
//
//  Created by 柳坤 on 15/10/11.
//  Copyright © 2015年 柳坤. All rights reserved.
//

#include <numeric>
#include <vector>
#include <iostream>
#include <list>
#include <iomanip>
#include <cmath>

using namespace std;

#include "code_primary_lib.hpp"
 
void test1()
{
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    list<int> l(10);
    iota(l.begin(), l.end(), -4);
    
    cout << "Contents of the list: ";
    for (auto n : l) cout << n << ' ';
    cout << '\n';
}

void printPrincipal()
{
    double amount, principal = 1000;
    double rate = .05;
    
    cout << "Year" << setw(21) << "Amount on deposit" << endl;
    cout << fixed << setprecision( 2 );
    
    for (int year = 1; year <= 10; year++)
    {
        amount = principal * pow(1.0 + rate, year);
        cout << setw(4) << year << setw(21) << amount << endl;
    }
}