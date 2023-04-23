/*
 * new_header.h
 *
 *  Created on: 2023年4月5日
 *      Author: Crist
 */

#ifndef NEW_HEADER_H_
#define NEW_HEADER_H_

//对新增的命名空间成员进行声明
namespace diy{
	class Teacher{
	private:
		char *m_name;
		int m_id;
	public:
		Teacher();
		void set_level();
	};
}

//声明一个类
class Test{
private:
	int m_number;
	char m_name;
public:
	Test();
	void func();
};

//声明外部类(嵌套类)
class OuterClass {
private:
    int x;
public:
    //内部类
    class InnerClass {
    private:
        int y;
    public:
        void setY(int y);
        int getY();
    };//注意这里有个分号！！

    void setX(int x);

    int getX();
};

//声明两个函数
void use_namespace();
void use_obj();


#endif /* NEW_HEADER_H_ */
