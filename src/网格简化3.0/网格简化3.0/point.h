#ifndef __POINT_H__
#define __POINT_H__

//����
class point{
public:
	point(double xx,double yy,double zz):x(xx),y(yy),z(zz){
		del=0;
	}
	double x,y,z;				//��ά����
	int del;					//�Ƿ�ɾ��
};

#endif