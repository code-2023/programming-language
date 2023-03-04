/*
 * c++usage.cpp
 *
 *  Created on: 2023年3月2日
 *      Author: Crist
 */

#include <iostream>
#include "cheader.h"
using namespace std;


/*普通构造方法
DIY::Student::Student(char *name,int age,float score){
	 m_name = name;
	 m_age = age;
	 m_score = score;
}
*/

//初始化 const 成员变量(非指针变量)的唯一方法就是使用属性初始化的构造方法
DIY::Student::Student(const int max,char *name,int age,float score):m_max(max){
	m_name=name;
	m_age=age;
	m_score=score;
}

void DIY::Student::set_name(char *name){
	m_name=name;
}
void DIY::Student::set_age(int age){
	m_age=age;
}
void DIY::Student::set_score(int score){
	m_score=score;
}
void DIY::Student::query(){
	printf("%s的年龄是%d，成绩是%f, 所在班级最大容量是%d\n", m_name, m_age, m_score,m_max);
}

void DIY::hello_world(){
	//定义字符串变量和整数变量
	string str;
	int year;
	//打印提示信息
	cout<<"Please input an string and int number:\n";
	//从控制台获取用户输入
	cin>>str>>year;
	//将数据输出到控制台
	cout <<str<<year<< endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
}
