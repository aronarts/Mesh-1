#ifndef __LINE_H__
#define __LINE_H__

#include "point.h"
#include "qmatrix.h"

class line{
public:
	line(int a1=-1,int a2=-1);											//���캯��
	~line();															//��������
	double calc(point& p1,point& p2,qmatrix& q1,qmatrix& q2);			//���������deltaֵ�Լ���Ѻϲ�����
	int first,second,index;												//���������,�ڶ��е�����ֵ
	double length;														//����
	point combine;														//�ϲ���ĵ�
	line *left,*right,*up,*down;										//ʮ�������е����������ھ�
};

#endif