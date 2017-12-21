#include "MastersStudent.h"
#include <iostream>
#include <vector> 
#include "Student.h"
#include <iomanip>

// Constructor Implementations
MastersStudent::MastersStudent(Student ug, int msy):
    Student(ug), _ms_grad_year(msy) {}
  
MastersStudent::MastersStudent(std::string fn, std::string ln,
    int ugy, int msy, Major m):
    Student(fn, ln, ugy, m), _ms_grad_year(msy) {}

// New methods specific to MastersStudent
float MastersStudent::getMsGpa() {
  int i;
  float sum = 0;
  for(i = 0; i < _ms_grades.size(); ++i) {
  	sum += _ms_grades[i];
  }
  return sum / _ms_grades.size();
}

void MastersStudent::addMsGrade(float grade) {
  _ms_grades.push_back (grade);
	return;
}

void MastersStudent::printInfo() {
  Student::printInfo();
std::cout <<"MS "<< majorString(_major) <<": " << _ms_grad_year << std::endl;
std::cout << "MS GPA: " << std::setprecision(2) << getMsGpa() << std::endl;
}
