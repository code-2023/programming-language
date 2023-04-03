//============================================================================
// Name        : LearnC++.cpp
// Author      : cristic white
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include <windows.h> //�{��Windows API
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
		cout<<"����Test����"<<endl;
	}
	void func(){
		cout<<"���ö��󷽷�"<<endl;
	}
};

void use_namespace(){
//	���´���ʹ�������ռ�DIY�еĳ�Ա(��Student������hello_world)
//	������Ķ��󲢵��÷���
//	1.����ջ����
	char *name=(char*)"cristic white";//ת����������C++�ľ���
	Student stu(66,name,27,90);
	Student *p =&stu;
//	stu.query();
	p->query();
	cout<<p<<endl;//��ӡջ�����ַ
	cout<<endl;

//	2.�����Ѷ���
	Student *p1=new Student();
	p1->query();
	cout<<p1<<endl;//��ӡ�Ѷ����ַ
	cout<<endl;

//	���÷���
	hello_world();
}

void use_obj(){
//	��ջ�ڴ洴������
	Test obj;
	obj.func();
	cout<<"ջ�����ַ��"<<&obj<<endl;
	cout<<"-----------------"<<endl;
//	�ڶ��ڴ洴������
	Test *p=new Test();
//	ͨ��ָ����õ��ú�����2�ַ���
	(*p).func();
	p->func();
//	��ӡָ����Ϣ
	cout<<"ָ����ڴ��ָ�룺"<<p<<endl;
	delete p;//�ͷ�ָ��ָ�����ռ�õ��ڴ�
	cout<<"ָ����ڴ��ָ�룺"<<p<<endl;
//	ɾ�������ڴ�󣬼�ʱ�ı�ָ��ָ��ĵ�ַ
	p=nullptr;
}

/*
//�{��Windows��API
int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd){
	MessageBox(NULL,"Hello,world","Note",MB_OK);
	return 0;
}
 */

int main() {
	cout<<PI<<endl;
//	��ԃ������ַ
	cout<<(void*)use_namespace<<endl;
	cout<<(void*)use_obj<<endl;
	return 0;
}


