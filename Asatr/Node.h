#pragma once
#include<math.h>
#include<vector>
#include<qstring.h>
#include<qpainter.h>
#include<unordered_set>

using namespace std;
class Node
{

public://����
	Node(int id, QString name, int type, int x, int y, int next1, int next2, int next3, int ScreenX, int ScreenY);
	Node();
	virtual void Draw(QPainter* p);
	void GetF();
	void GetG(Node* start);
	void GetH(Node* end);
	virtual void Clear();
	virtual int State() { return -1; };
	virtual void SetState(int state) {};
	virtual void SetLock(int lock) {};
	
public://��Ա
	int ID;
	QString name;
	int type;
	int X;
	int Y;
	int NextID_1;
	int NextID_2;
	int NextID_3;
	int ScreenX;
	int ScreenY;
	Node* fatherNode;//�ý��ĸ��ڵ�(��ָ��closed���ɸý�����ʱ����һ���ڵ�
	std::vector<Node*> next;//�ý����ڽӽ��
	double f;
	double g;
	double h;
	
};

