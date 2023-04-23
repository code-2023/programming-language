/*
 * cheader.h
 *
 *  Created on: 2023年3月2日
 *      Author: Crist
 */

#ifndef CHEADER_H_
#define CHEADER_H_

//声明命名空间(包含一个类和一个函数)
namespace diy{
//	声明类
    class Student{
    //私有成员
    private:
		const int m_max;//静态常量
        char *m_name;
        int m_age;
        float m_score;
    //公有成员
    public:
        Student();
        Student(const int max,char *name,int age,float score);
        void set_name(char *name);
        void set_age(int age);
        void set_score(int score);
        void query();
    };

//	声明函数
    void hello_world();
}


#endif /* CHEADER_H_ */
