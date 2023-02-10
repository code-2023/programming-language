//============================================================================
// Name        : LearnC++.cpp
// Author      : cristic white
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

namespace DIY{
	void hello_world(){
		//定义字符串变量
		string str;
		//定义 int 变量
		int year;
		cout<<"Please input an string and int number:\n";
		//从控制台获取用户输入
		cin>>str>>year;
		//将数据输出到控制台
		cout <<str<<year<< endl;
		cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
}
    class Student{
    public:
        char const *name;//常量
        int age;
        float score;

    public:
        void say(){
            printf("%s的年龄是 %d，成绩是 %f\n", name, age, score);
        }
    };
}

int main() {
//	using namespace DIY;
//	DIY::hello_world();
	DIY::Student stu;
	stu.name="cristic white";
	stu.age=27;
	stu.score=90;
	stu.say();
	return 0;
}


//#include <string>
