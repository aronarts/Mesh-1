#ifndef __HEAP_NODE_H__
#define __HEAP_NODE_H__

#include "line.h"
#include <iostream>
using namespace std;

//���еĵ�Ԫ
class heap_node{
public:
	heap_node(double d,line* b=NULL){
		delta=d;
		back=b;
	}
	~heap_node(){back=NULL;}
	double delta;							//deltaֵ���Ѱ���deltaֵ����ƫ������
	line* back;								//ָ��ʮ�������еĽڵ�
};

#endif