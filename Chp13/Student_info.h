#pragma once
// Student_info.h

#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <vector>// vectortor -> vector
#include <string>
#include <stdexcept>
#include "Core.h"//private 변수 cp 위해

using namespace std;

class Student_info {
public:
    //생성자 및 복사 제어
    Student_info() : cp(0) { }
    Student_info(istream& is) : cp(0) { read(is); }
    Student_info(const Student_info&);
    Student_info& operator=(const Student_info&);
    ~Student_info() { delete cp; }

    //멤버 함수 
    istream& read(istream&);

    string getName() const {
        if (cp) return cp->getName();
        else throw runtime_error("Unitialized Stdunt!");
    }
    double grade() const {
        if (cp) return cp->grade();
        else throw runtime_error("Unitialized Stdunt!");
    }
    static bool compare(const Student_info& s1, Student_info& s2) {
        return s1.getName() < s2.getName();
    }
private:
    Core* cp;
};

#endif