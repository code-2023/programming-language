/*
 * encapsulation.c
 *
 *  Created on: 2023��4��5��
 *      Author: Crist
 */

#include <iostream>
#include "cheader.h"
#include "new_header.h"
using namespace diy;
using namespace std;

Test::Test():m_number(0),m_name('\0'){
	cout<<"����Test����"<<endl;
}

void Test::func(){
	cout<<"���ö��󷽷�"<<endl;
}

//ʵ���ⲿ��ĳ�Ա����
void OuterClass::setX(int x){
	this->x=x;
}
int OuterClass::getX(){
	return this->x;
}
//ʵ���ⲿ���е��ڲ��ඨ��
void OuterClass::InnerClass::setY(int y){
	this->y=y;
}
int OuterClass::InnerClass::getY(){
	return this->y;
}

//����������ʹ���������ռ�DIY�еĳ�Ա(��Student������hello_world)
void use_namespace(){
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

