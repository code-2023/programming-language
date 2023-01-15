/*
 * test.c
 *
 *  Created on: 2022年12月18日
 *      Author: zengpeng
 */

#include <stdio.h>

int main(void){

	int a=puts("屏幕打印321");
	printf("puts的返回值=%d",a);
	char *b="123456";
	printf("%c",b[0]);
	char *c;
	printf("请输入字符串：");
	scanf("%s",c);
	printf("输出字符串：%c");
//	for(int i=0;i<sizeof(c)/sizeof(c[0]);i++){
//		printf("%c",c[i]);
//	}
	return 0;
}
