/*
 * cheader.h
 *
 *  Created on: 2023��3��2��
 *      Author: Crist
 */

#ifndef CHEADER_H_
#define CHEADER_H_
namespace DIY{
    class Student{
    //˽�г�Ա
    private:
		const int m_max;//��̬����
        char *m_name;
        int m_age;
        float m_score;
    //���г�Ա
    public:
        Student(const int max,char *name,int age,float score);
        void set_name(char *name);
        void set_age(int age);
        void set_score(int score);
        void query();
    };
    void hello_world();
}


#endif /* CHEADER_H_ */
