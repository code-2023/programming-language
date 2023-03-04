/*
 ============================================================================
 Name        : LearnC.c
 Author      : cristic white
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
双引号""：先在指定的路径下去寻找头文件，如果找不到，则会去系统中寻找头文件，如果找不到，则报错。
尖括号<>：直接去系统中寻找头文件，如果找不到，就报错。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"
//#include "base.h"
#include "pointer.h"
#include "struct.h"
//#include "linked_list.h"

int main(void) {
//	puts("Hello World"); /* prints Hello World */
//	return EXIT_SUCCESS;

//	base();
//	struct_type();
	char_pointer();
	char_pointer_arr();
//	linked_list();


}
