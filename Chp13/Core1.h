#ifndef GUARD_CORE_H
#define GUARD_CORE_H

#include <iostream>	
#include <string>
#include <vectortor>

using namespace std;
class Core {
	Core() : midterm(0), final(0) {};
	Core(istream& is) {
		read(is);
	}
	string getName() const;
	virtual double grade() const; //�����Լ�
	virtual istream& read(istream&);

protected:
	istream& read_common(istream&); //�̸�,����,����
	double midterm, final;
	vectortor<double> homework;
public:
	string name;
};

bool compare(const Core&, const Core&);
bool compare_grades(const Core&, const Core&);

#endif // !GUARD_CORE_H
