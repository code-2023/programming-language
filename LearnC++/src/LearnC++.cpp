//============================================================================
// Name        : LearnC++.cpp
// Author      : cristic white
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "cheader.h"
using namespace std;
using namespace DIY;

int main() {
//	DIY::hello_world();
//	DIY::Student stu;
//	stu.set_name("cristic white");
//	stu.set_age(27);
//	stu.set_score(90);
//	stu.query();

//	DIY::Student stu("cristic white",27,90);
//	stu.query();

	char *name=(char*)"cristic white";//转换类型消除C++的警告
	Student stu(66,name,27,90);
	Student *p =&stu;
//	stu.query();
	p->query();
	return 0;
}


//#include <string>
