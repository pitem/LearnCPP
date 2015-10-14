//
//  main.cpp
//  GradeBook
//
//  Created by 柳坤 on 15/10/11.
//  Copyright © 2015年 柳坤. All rights reserved.
//

#include <iostream>

using namespace std;

#include "GradeBook.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    
    GradeBook myGradeBook("c++");
    
    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();
    return 0;
}
