//
//  PracticeC++.cpp
//  
//
//  Created by 柳坤 on 15/10/9.
//
//
#include <numeric>
#include <vector>
#include <iostream>
#include <list>


using namespace std;
int main()
{
    list<int> l(10);
    iota(l.begin(), l.end(), -4);
    
    cout << "Contents of the list: ";
    for (auto n : l) cout << n << ' ';
    cout << '\n';
    return 0;
}