#pragma once
#include "Node.h"
class Signal :
	public Node
{
public:
	int state;//0=�ر� 1=���� 2=����
public:
	Signal(int id, QString name, int type, int x, int y, int next1, int next2, int next3, int ScreenX, int ScreenY,int state);
	void Draw(QPainter* p);
	int State();
	void SetState(int state);
	void Clear();
};

