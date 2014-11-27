#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream>
using namespace std;

class matrix{
public:
	matrix(int xx=4,int yy=4);
	matrix(const matrix& copy);
	~matrix();
	matrix& operator=(const matrix& eval);
	matrix& operator+(matrix& plus);
	matrix& operator-(matrix& minus);
	matrix& operator*(double time);
	matrix& operator*(matrix& time);
	matrix& operator/(double div);
	matrix& submatrix(int xx,int yy);		//��һ���Ӿ���
	matrix& T();							//ת��
	double det();							//��������ʽ��ֵ
	matrix& reverse();						//�����
	double** elem;
	int x,y;
private:
	void destroy();
};

#endif