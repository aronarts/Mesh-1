#ifndef __MESH_H__
#define __MESH_H__

#include "point.h"
#include "line.h"
#include "tri_num.h"
#include "heap_node.h"
#include "qmatrix.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class mesh{
public:
	mesh(double r,double max);			//���캯��,rΪѹ����,maxΪ�����
	~mesh();							//��������
	int input(string file);				//����obj�ļ�
	void output(string file);			//�����Ϣ��obj�ļ�
	void initialize();					//��ʼ��,�����ߵ�ʮ���������㵽��ĵ����б�����
	void heap_adjust(int num);			//�Զѽ��оֲ�����
	void find();						//�ҳ�С��maxdis�ı߼������
	int del_a_point();					//�ϲ�һ�鶥��
	void simplify();					//����һ���������������
	vector<point> pt;					//��ļ���
	vector<tri_num> tri;				//�������ļ���
	line **lx,**ly;						//ʮ�������������
	vector<int>* t_table;				//�����ĵ����б�
	qmatrix *qpt,*qface;				//��͵��Ӧ�ľ���
	vector<heap_node> heap;				//��
	int m_point,m_tri;					//�ܵ������ܱ���
	int del_point,del_tri;				//ɾȥ���ܵ������ܱ���
	double rate,maxdis;					//���ʺ����߳���
	//friend void draw();					//����
	void show();						//��ʾ
};



#endif