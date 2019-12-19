#pragma once
#include "spritelib.h"

class CDisks :
	public CSprite
{
public:
	 CDisks(int);				//ich könnte einen besseren Konstruktor schreiben um arrays für die Scheiben  zu verwenden
	 CDisks();
	 ~CDisks();
	 virtual void DiskInit(CSpriteList&, int);
	 void SetPosDisk(int, int);
	 virtual int GetSize();
	
protected:
	CSprite d;
	int Size;

};

