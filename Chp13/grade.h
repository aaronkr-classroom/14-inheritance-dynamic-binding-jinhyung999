#pragma once
// grade.h

#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <list>
#include <vector> 
#include "Student_info.h"

using namespace std;

double grade(double, double, double);
double grade(double, double, vector<double>&);

list<Student_info> extract_fails(list<Student_info>&);

#endif