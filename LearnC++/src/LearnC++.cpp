//============================================================================
// Name        : LearnC++.cpp
// Author      : cristic white
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <windows.h> //調用Windows API
#include "cheader.h"
#include "new_header.h"
#define PI 3.1415926

//using namespace std;
using namespace diy;//由cheader.h和new_header.h声明的函数组成


int main(){
	std::cout<<"hello world"<<std::endl;
}


/*注释main函数
int main() {
	cout<<PI<<endl;
//	查詢函數地址
	cout<<(void*)use_namespace<<endl;
	cout<<(void*)use_obj<<endl;
//	使用嵌套类创建对象
	OuterClass::InnerClass inner;
	inner.setY(5);
	cout << inner.getY() << endl;
	return 0;
}
 */

/*注释WinMain函数
int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd){
	MessageBox(NULL,"Hello,world","Note",MB_OK);
	return 0;
}
 */

