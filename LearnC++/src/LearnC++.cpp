//============================================================================
// Name        : LearnC++.cpp
// Author      : cristic white
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <windows.h> //�{��Windows API
#include "cheader.h"
#include "new_header.h"
#define PI 3.1415926

//using namespace std;
using namespace diy;//��cheader.h��new_header.h�����ĺ������


int main(){
	std::cout<<"hello world"<<std::endl;
}


/*ע��main����
int main() {
	cout<<PI<<endl;
//	��ԃ������ַ
	cout<<(void*)use_namespace<<endl;
	cout<<(void*)use_obj<<endl;
//	ʹ��Ƕ���ഴ������
	OuterClass::InnerClass inner;
	inner.setY(5);
	cout << inner.getY() << endl;
	return 0;
}
 */

/*ע��WinMain����
int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd){
	MessageBox(NULL,"Hello,world","Note",MB_OK);
	return 0;
}
 */

