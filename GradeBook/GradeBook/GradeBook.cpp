//
//  GradeBook.cpp
//  GradeBook
//
//  Created by 柳坤 on 15/10/11.
//  Copyright © 2015年 柳坤. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

#include "GradeBook.hpp"

GradeBook::GradeBook( string name)
{
    setCourseName(name);
    maximumGrade = 0;
}

void GradeBook::inputGrades()
{
    int grade1, grade2, grade3;
    
    cout << "Enter three interger grades: ";
    cin >> setw(4) >> grade1 >> setw(4) >> grade2 >> setw(4) >> grade3;
    maximumGrade = maximum( grade1, grade2, grade3 );
}

int GradeBook::maximum( int a, int b, int c )
{
    int max = a;
    
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    
    return max;
}

void GradeBook::displayGradeReport()
{
    cout << "Maximum of grades entered: " << maximumGrade << endl;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
    << endl;
}

string GradeBook::getCourseName()
{
    return this->courseName;
}

void GradeBook::setCourseName( string name)
{
    if (name.length() <= 25)
    {
        courseName = name;
    }
    else
    {
        this->courseName = name.substr(0, 25);
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
        << "Limiting courseName to first 25 characters.\n" << endl;
    }
}