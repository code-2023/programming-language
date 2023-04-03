#include <stdio.h>
#include <string.h>

void print_int_arr(int *num,int len);

void int_array(){
	int num[]={1,2,3,4};
	printf("�������鵥Ԫռ�õ��ڴ棺%I64dBytes\n",sizeof(int));
	printf("�����׵�ַ��%p\n",num);//ʮ�����Ƶ�ַ(��%p��ʽ���ָ��ֵ����ȷ����)
//	printf("%d\n",num);  //ʮ���Ƶ�ַ(��%d��ʽ���ָ��ֵ��������о���)
	printf("num+1�ĵ�ַ=%p\n",num+1);
	int len=sizeof(num)/sizeof(int);
	print_int_arr(num,len);
}

void char_array(){
	char c;
	char chr[]={'h','e','l','l','o'};
	printf("�����ַ�����c��ֵ��");
	fflush(stdout);
	scanf("%c",&c);
	printf("���ر���c�ĵ�ַ��%p\n",&c);
	printf("��������chr�ĵ�ַ��%p\n",&chr);
	printf("�ַ�����ĳ��ȣ�%I64d\n",sizeof(chr)/sizeof(char));
}

void string_array(){
	/*��ͬ�ַ�����ʽ�ı���һ�����������飻
	 * �ַ�����һ�����������--��'\0'��β;
	 * ����(�ַ���)��������޸�*/

	char str_arr[]={'h','e','l','l','o','\0'};
	char str[]="hello";
	char s[20];

	printf("�����ַ�����");
	fflush(stdout);
	scanf("%s",s);
	printf("��ӡ�ַ�����%s\n",s);

	printf("str���������׵�ַ��%p\n",str);
	printf("�����׵�ַ+1��%p\n",str+1);

	str[1]='E';
	printf("��ӡ�޸ĺ�ı������飺%s\n",str);
	printf("��ӡ�ַ������飺%s\n",str_arr);
	//���ַ������ȵ�2�ַ���
	printf("�ַ�������ĳ��ȣ�%I64d\n",sizeof(str)/sizeof(char));
	printf("�ַ����ĳ��ȣ�%I64d\n",strlen(str_arr));
	printf("�ַ����ĳ��ȣ�%I64d\n",strlen(str));
}

void print_int_arr(int *num,int len){
	printf("sizeof(int*)=%I64u\n",sizeof(int*));
	for(int i=0;i<len;i++){
//		printf("%d",num[i]);//�������
		printf("%d",*(num+i));//ָ�����
		}
	printf("\n");
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
		printf("s[%d]��ֵ��ʾ�ַ������׵�ַ%p,",i,s[i]);
		printf("��Ӧ���ַ�����%s\n",s[i]);
	}
}
