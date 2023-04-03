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

//�޲ι��췽��
DIY::Student::Student():m_max(77){
	cout<<"�����޲ι��췽����������"<<endl;
	m_name = (char*)"С��";
	m_age = 22;
	m_score = 88;
}

//�вι��췽��
//��ʼ��const ��Ա����(��ָ�����)����ͨ�����¸�ʽ�Ĺ��췽�������
DIY::Student::Student(const int max,char *name,int age,float score):m_max(max){
	cout<<"�����вι��췽����������"<<endl;
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
	printf("%s��������%d���ɼ���%.2f, ���ڰ༶���������%d\n", m_name, m_age, m_score,m_max);
}

void DIY::hello_world(){
	//�����ַ�����������������
	string str;
	//��ӡ��ʾ��Ϣ
	cout<<"Please input an string:\n";
	//�ӿ���̨��ȡ�û�����
	cin>>str;
	//���������������̨
	cout<<"Hello World!"<<str<<endl; // prints !!!Hello World!!!
}
