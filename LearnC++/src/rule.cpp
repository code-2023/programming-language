/*
 * c++usage.cpp
 *
 *  Created on: 2023��3��2��
 *      Author: Crist
 */

#include <iostream>
#include "cheader.h"
using namespace std;


/*��ͨ���췽��
DIY::Student::Student(char *name,int age,float score){
	 m_name = name;
	 m_age = age;
	 m_score = score;
}
*/

//��ʼ�� const ��Ա����(��ָ�����)��Ψһ��������ʹ�����Գ�ʼ���Ĺ��췽��
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
	printf("%s��������%d���ɼ���%f, ���ڰ༶���������%d\n", m_name, m_age, m_score,m_max);
}

void DIY::hello_world(){
	//�����ַ�����������������
	string str;
	int year;
	//��ӡ��ʾ��Ϣ
	cout<<"Please input an string and int number:\n";
	//�ӿ���̨��ȡ�û�����
	cin>>str>>year;
	//���������������̨
	cout <<str<<year<< endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
}
