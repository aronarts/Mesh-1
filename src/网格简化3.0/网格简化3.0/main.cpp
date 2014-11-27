#include <iostream>
#include <string>
#include "mesh.h"
using namespace std;

int main(int argc,char* argv[]){
	if(argc!=4){
		cout<<"�����3.0.exe ����.obj ���.obj �򻯱�"<<endl;
		return -1;
	}
	string rate(argv[3]);
	double r=0,w=0.1;
	int point=0;
	//�����ĸ�������Ϊdouble����
	for(int i=0;i<rate.size();i++){
		if(rate[i]=='.'){
			if(point==0)
				point=1;
			else{
				cout<<"�򻯱��������"<<endl;
				return -1;
			}
		}
		else if(point==0){
			if(rate[i]>='0'&&rate[i]<='9')
				r=r*10+rate[i]-'0';
			else{
				cout<<"�򻯱��������"<<endl;
				return -1;
			}
		}
		else{
			if(rate[i]>='0'&&rate[i]<='9'){
				r=r+w*(rate[i]-'0');
				w=w/10;
			}
			else{
				cout<<"�򻯱��������"<<endl;
				return -1;
			}
		}
	}
	if(r>1){
		cout<<"�򻯱��������"<<endl;
		return -1;
	}
	mesh func(r,0.005);
	string infile(argv[1]),outfile(argv[2]);
	func.input(infile);
	func.initialize();
	func.simplify();
	func.output(outfile);
	func.show();
	return 0;
}