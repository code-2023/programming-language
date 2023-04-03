//============================================================================
// Name        : LearnC++.cpp
// Author      : cristic white
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include <windows.h> //調用Windows API
#include "cheader.h"
#define PI 3.1415926

using namespace std;
using namespace DIY;


class Test{
private:
	int m_number;
	char m_name;
public:
	Test():m_number(100),m_name('T'){
		cout<<"创建Test对象"<<endl;
	}
	void func(){
		cout<<"调用对象方法"<<endl;
	}
};

void use_namespace(){
//	以下代码使用命名空间DIY中的成员(类Student、函数hello_world)
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

/*
//調用Windows的API
int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd){
	MessageBox(NULL,"Hello,world","Note",MB_OK);
	return 0;
}
 */

int main() {
	cout<<PI<<endl;
//	查詢函數地址
	cout<<(void*)use_namespace<<endl;
	cout<<(void*)use_obj<<endl;
	return 0;
}


