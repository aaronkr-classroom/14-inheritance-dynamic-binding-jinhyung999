//main_core.cpp
#include <algorithm>

#include <ios>

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

#include "Grad.h"

int main() {
	vector<Grad> students;
	Grad record;
	string::size_type maxlen = 0;

	while (record.read(cin)) {
		maxlen = max(maxlen, record.getName().size());
		students.push_back(record);
	}
	//학생 기록을 알파벳 순으로 정렬
	sort(students.begin(), students.end(), compare);
	//이름과 점수 출력
	for (vector<Grad>::size_type i = 0; i != students.size(); ++i) {
		cout << students[i].getName()
			<< string(maxlen + 1 - students[i].getName().size(), ' ');

		try {
			double final_grade = students[i].grade();
			streamsize prec = cout.precision();
			cout<<setprecision(3)<< final_grade
				<< setprecision(prec) << endl;
		}
		catch (domain_error e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}
