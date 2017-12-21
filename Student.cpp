#include "Student.h"
#include <stdio.h>

Student::Student(std::string fn, std::string ln, int y, Major m) {

  _first_name = fn;
  _last_name = ln;
  _major = m;
  _grad_year = y;
}

Student::~Student() {}

float Student::getGpa() {
	float sum = 0;
	int i;
	for(i = 0; i < _grades.size(); i++) {
		sum += _grades.at(i);
	}
	float gpa = sum / _grades.size();
	return gpa;
}

void Student::addGrade(float grade) {
  _grades.push_back(grade);
}

std::string Student::majorString(Major m) {
  std::string stmajor;
  switch(m){
  case Major::ME:
    stmajor = "ME"; break;
  case Major::EE:
    stmajor = "EE"; break;
  case Major::CHE:
    stmajor = "CHE"; break;
  case Major::CE:
    stmajor = "CE"; break;
  case Major::BSE:
    stmajor = "BSE"; break;
  case Major::ART:
    stmajor = "ART"; break;
  case Major::ARCH:
    stmajor = "ARCH"; break;
  default:
    printf("Invalid Major");
  }
  return stmajor; 
}


const std::string& Student::getLastName(){
	return _last_name;
}

void Student::printInfo() {
	printf("%s, %s\n", _last_name.c_str(), _first_name.c_str()); 
	printf("%s %d\n", majorString(_major).c_str(), _grad_year); 
	printf("GPA: %.2f\n", getGpa() ); 

  }
