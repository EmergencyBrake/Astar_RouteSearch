#pragma once
#include "Node.h"
#include<unordered_set>
using namespace std;
class Track :
	public Node
{
public://��Ա
	QPoint p1, p2, p3, p4, p5, p6,p7;
	int state;//0 δ���� 1��λ 2��λ 3�����޲����Σ�˫�������ζ�λ 4��  5�ҷ���4 5Ϊ˫��������ר�á� 
	int track_type;
public:
	Track(int id, QString name, int type, int x, int y, int next1, int next2, int next3, int ScreenX, int ScreenY,Track* t);
	Track(int id, QString name, int track_type, QPoint p1, QPoint p2, QPoint p3, QPoint p4, QPoint p5, QPoint p6, QPoint p7);
	void Clear();
	int State();
	void SetState(int state);
	void Draw(QPainter* p);
	
};

