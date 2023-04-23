/*
 * new_header.h
 *
 *  Created on: 2023��4��5��
 *      Author: Crist
 */

#ifndef NEW_HEADER_H_
#define NEW_HEADER_H_

//�������������ռ��Ա��������
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

//����һ����
class Test{
private:
	int m_number;
	char m_name;
public:
	Test();
	void func();
};

//�����ⲿ��(Ƕ����)
class OuterClass {
private:
    int x;
public:
    //�ڲ���
    class InnerClass {
    private:
        int y;
    public:
        void setY(int y);
        int getY();
    };//ע�������и��ֺţ���

    void setX(int x);

    int getX();
};

//������������
void use_namespace();
void use_obj();


#endif /* NEW_HEADER_H_ */
