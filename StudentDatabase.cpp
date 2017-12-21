
#include "StudentDatabase.h"
#include "Student.h"
#include <map>
#include <iostream>
#include <string>

void StudentDatabase::addStudent(Student *s) {
	_students[(s->getLastName())] = s;
}
void StudentDatabase::printStudent(std::string last_name) {
  if (_students.find(last_name) == _students.end()){ 
	printf("%s not found\n",last_name.c_str()); 
  }
  else {
  _students[last_name]->printInfo();
 }
}
