#ifndef __TRI_NUM_H__
#define __TRI_NUM_H__

#include "point.h"

//��Ƭ������
class tri_num{
public:
	tri_num(int pp1,int pp2,int pp3):p1(pp1),p2(pp2),p3(pp3){
		a=0,b=0,c=0,d=0;
	}
	void calc(point& a1,point& a2,point& a3);			//����ax+by+cz+d=0�е�ϵ��
	int p1,p2,p3;										//��Ƭ��������Ĵ���
	double a,b,c,d;										//ƽ����ʽ��a,b,c,d��ֵ
};

#endif