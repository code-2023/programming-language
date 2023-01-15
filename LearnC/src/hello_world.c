/*
 ============================================================================
 Name        : LearnC.c
 Author      : cristic white
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void print_arr(char *str){
//	for(int i=0;i<sizeof(str)/sizeof(char);i++){
////			printf("%c",str[i]);
//			printf("%c",*(str+i));
//		}
//	printf("\n");
//}

int main(void) {
//	puts("Hello World"); /* prints Hello World */
//	return EXIT_SUCCESS;

//	int num[]={1,2,3,4};
//	printf("整型数组单元占用的内存：%I64dBytes\n",sizeof(int));
//	printf("%d\n",num);//十进制地址
//	printf("数组首地址：%p\n",num);//十六进制地址
//	printf("num+1的地址=%p",num+1);

	char c;
//	char chr[]={'h','e','l','l','o'};
	printf("输入字符变量c的值：");
	fflush(stdout);
	scanf("%c",&c);
	printf("本地变量c的地址：%p\n",&c);
//	printf("本地数组chr的地址：%p\n",&chr);
//	printf("字符数组的长度：%I64d\n",sizeof(chr)/sizeof(char));

	char s[20];
//	char str[]="hello";
//	char str_arr[]={'h','e','l','l','o','\0'};
	/*字符串是一个特殊的数组--以'\0'结尾*/
	printf("输入字符串：");
	fflush(stdout);
	scanf("%s",s);
	printf("打印字符串：%s\n",s);
//	printf("%d\n",s); /*s是char类型指针，不符合%d的要求*/
//	printf("str指向地址：%p\n",str);
//	printf("%p\n",str+1);
//	str[0]='H';/*本地数组可以修改*/
//	printf("打印字符串数组：%s\n",str_arr);
//	printf("字符串数组的长度：%I64d\n",sizeof(str_arr)/sizeof(char));
//	printf("字符串的长度：%I64d\n",strlen(str_arr));


//	char *str1="hello1";
//	char *str2="hello2";
//	char* str_ptr[]={str1,str2};
//	printf("str1指向地址：%p\n",str1);
//	printf("str2指向地址：%p\n",str2);
//	str1[0]='H'; 无法改动，只读的
//	printf("%p\n",str_ptr);
//	printf("%p\n",*str_ptr);
//	printf("%s\n",str1);
//	printf("%s\n",str1+1);


//	printf("%I64u %I64u",sizeof(str),sizeof(str)/sizeof(char));
//	printf("sizeof(str)=%I64u\n",sizeof(str));
//	printf("strlen(str)=%lu\n",strlen(str));
//	printf("str[]的地址：%p\n",str);
//	printf("str1指针值：%p\n",str1);
//	print_arr(str);
//	print_arr(str1);
//	printf("%s\n",str);
//	printf("%s\n",str1);

}
