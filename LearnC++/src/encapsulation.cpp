/*
 * encapsulation.c
 *
 *  Created on: 2023年4月5日
 *      Author: Crist
 */

#include <iostream>
#include "cheader.h"
#include "new_header.h"
using namespace diy;
using namespace std;

Test::Test():m_number(0),m_name('\0'){
	cout<<"创建Test对象"<<endl;
}

void Test::func(){
	cout<<"调用对象方法"<<endl;
}

//实现外部类的成员函数
void OuterClass::setX(int x){
	this->x=x;
}
int OuterClass::getX(){
	return this->x;
}
//实现外部类中的内部类定义
void OuterClass::InnerClass::setY(int y){
	this->y=y;
}
int OuterClass::InnerClass::getY(){
	return this->y;
}

//函数定义内使用了命名空间DIY中的成员(类Student、函数hello_world)
void use_namespace(){
//	创建类的对象并调用方法
//	1.创建栈对象
	char *name=(char*)"cristic white";//转换类型消除C++的警告
	Student stu(66,name,27,90);
	Student *p =&stu;
//	stu.query();
	p->query();
	cout<<p<<endl;//打印栈对象地址
	cout<<endl;

//	2.创建堆对象
	Student *p1=new Student();
	p1->query();
	cout<<p1<<endl;//打印堆对象地址
	cout<<endl;

//	调用方法
	hello_world();
}

void use_obj(){
//	在栈内存创建对象
	Test obj;
	obj.func();
	cout<<"栈对象地址："<<&obj<<endl;
	cout<<"-----------------"<<endl;
//	在堆内存创建对象
	Test *p=new Test();
//	通过指针调用调用函数的2种方法
	(*p).func();
	p->func();
//	打印指针信息
	cout<<"指向堆内存的指针："<<p<<endl;
	delete p;//释放指针指向对象占用的内存
	cout<<"指向堆内存的指针："<<p<<endl;
//	删除对象内存后，及时改变指针指向的地址
	p=nullptr;
}

