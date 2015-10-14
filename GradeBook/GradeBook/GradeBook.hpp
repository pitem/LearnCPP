//
//  GradeBook.hpp
//  GradeBook
//
//  Created by 柳坤 on 15/10/11.
//  Copyright © 2015年 柳坤. All rights reserved.
//

#ifndef GradeBook_hpp
#define GradeBook_hpp

#include <string>
#include <stdio.h>

using namespace std;

class GradeBook
{
public:
    GradeBook( string );
    void inputGrades();
    int maximum( int, int, int );
    void displayGradeReport();
    void displayMessage();
    string getCourseName();
    void setCourseName( string );
private:
    int maximumGrade;
    string courseName;
};


#endif /* GradeBook_hpp */
