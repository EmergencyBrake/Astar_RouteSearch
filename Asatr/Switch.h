#pragma once
#include "Node.h"
class Switch :
	public Node
{
public:
	int state;//1��λ 2��λ Ĭ�϶�λ
	int lock;//0 δ���� 1����
public:
	Switch(int id, QString name, int type, int x, int y, int next1, int next2, int next3, int ScreenX, int ScreenY, int state , int lock );
	void Draw(QPainter* p);
	int State();
	void SetState(int state);
	void Clear();
	void SetLock(int lock);
};

