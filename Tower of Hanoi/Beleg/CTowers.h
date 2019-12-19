#pragma once
#include "CDisks.h"

class CTowers :
	public CDisks
{
public:
	CTowers(int);
	CTowers();
	~CTowers();
	virtual void TowerInit(CSpriteList&);
	virtual void Add(CDisks *d,int, int);
	virtual void Remove();
	void SetTowerPos(int, int);
	virtual bool hittest(CSprite *h);
	virtual CTowers* Wichtower(CSprite *s);
	int GetAnz();
	int GetSize();
	int GetTNum();
	CDisks* GetDisk();
	virtual bool GameOver();

	

protected: 
	CSprite t;
	CDisks *d[3];
	int TNum;
	int anz;
};

