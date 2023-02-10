#include <string.h>
#include "function.h"

void print_int_arr(int *num,int len){
	printf("sizeof(int*)=%I64u\n",sizeof(int*));
	for(int i=0;i<len;i++){
//		printf("%d",num[i]);//数组遍历
		printf("%d",*(num+i));//指针遍历
		}
	printf("\n");
}

void int_array(){
	int num[]={1,2,3,4};
	printf("整型数组单元占用的内存：%I64dBytes\n",sizeof(int));
	printf("数组首地址：%p\n",num);//十六进制地址(以%p格式输出指针值是正确方法)
//	printf("%d\n",num);  //十进制地址(以%d格式输出指针值，编译会有警告)
	printf("num+1的地址=%p\n",num+1);
	int len=sizeof(num)/sizeof(int);
	print_int_arr(num,len);
}

void char_array(){
	char c;
	char chr[]={'h','e','l','l','o'};
	printf("输入字符变量c的值：");
	fflush(stdout);
	scanf("%c",&c);
	printf("本地变量c的地址：%p\n",&c);
	printf("本地数组chr的地址：%p\n",&chr);
	printf("字符数组的长度：%I64d\n",sizeof(chr)/sizeof(char));
}

void string_array(){
	/*不同字符串形式的本质一样，都是数组；
	 * 字符串是一个特殊的数组--以'\0'结尾;
	 * 本地(字符串)数组可以修改*/

	char str_arr[]={'h','e','l','l','o','\0'};
	char str[]="hello";
	char s[20];

	printf("输入字符串：");
	fflush(stdout);
	scanf("%s",s);
	printf("打印字符串：%s\n",s);

	printf("str本地数组首地址：%p\n",str);
	printf("数组首地址+1：%p\n",str+1);

	str[1]='E';
	printf("打印修改后的本地数组：%s\n",str);
	printf("打印字符串数组：%s\n",str_arr);
	//求字符串长度的2种方法
	printf("字符串数组的长度：%I64d\n",sizeof(str)/sizeof(char));
	printf("字符串的长度：%I64d\n",strlen(str_arr));
	printf("字符串的长度：%I64d\n",strlen(str));
}

void char_pointer(){
	char *str='\0';
	char *str1="hello1";
	char *str2="hello2";
	char* str_ptr[]={str1,str2};
//	str1[0]='H'; 指针所指的字符串是无法改动的，只读的
	if(str==NULL){
		printf("这是一个空指针\n");
	}
	printf("str1指向地址：%p\n",str1);
	printf("str2指向地址：%p\n",str2);
	printf("%p\n",str_ptr);
	printf("%p\n",*str_ptr);

	printf("一个指针变量占用的内存大小：%I64dBytes\n",sizeof(str1));
	//以%s的格式输出指针指向的字符串
	printf("%s\n",str1);
	printf("%s\n",str1+1);
}

void char_pointer_arr(){
	char *arr[30];
	char *str="hello world";
	int l=(int)strlen(str);
	for(int i=0;i<l;i++){
		arr[i]=str++;
	}
	for(int j=0;j<l;j++){
		printf("字符%c对应地址%p\n",*arr[j],arr[j]);
	}
}

void typedef_string(){
	typedef char* string[10];
	char *str1="hello";
	char *str2="english";
	char *str3="chinese";
	char *str4="world";
	char *str5="2023";
	string s={str1,str2,str3,str4,str5};
	for(int i=0;i<5;i++){
		printf("s[%d]的值表示字符串的首地址%p,",i,s[i]);
		printf("对应的字符串是%s\n",s[i]);
	}
}
