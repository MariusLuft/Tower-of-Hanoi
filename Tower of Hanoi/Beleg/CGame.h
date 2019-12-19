#pragma once
#include "CTowers.h"
class CGame :
	public CTowers
{
public:
	CGame();
	~CGame();
	void GameInit(CSpriteList&);
	bool hittest(CSprite *h);
	void Add(CDisks *d, CTowers *z);
	void Remove(CTowers *r);
	CTowers* Wichtower(CSprite *s);
	bool GameOver();
	

	
	
protected:								///////////////		Erstellen der benötigten Objekte
	CDisks Disk1;
	CDisks Disk2;
	CDisks Disk3;

	CTowers Tower1;
	CTowers Tower2;
	CTowers Tower3;
	

};

