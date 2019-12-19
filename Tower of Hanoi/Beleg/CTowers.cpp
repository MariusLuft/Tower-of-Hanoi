#include "stdafx.h"
#include "CTowers.h"


CTowers::CTowers()
{
	anz = 0;
	d[0] = NULL;
	d[1] = NULL;
	d[2] = NULL;
	TNum = 0;
}


CTowers::CTowers(int t)
{
	anz = 0;
	d[0] = NULL;
	d[1] = NULL;
	d[2] = NULL;
	TNum = t;
}


CTowers::~CTowers()
{
}

void CTowers::TowerInit(CSpriteList& l)
{
	t.Load("tower.bmp", CSize(500,375));
	t.SetZ(100);
	t.SetPosition(1000,1000);
	t.SetSpriteNumber(0, 0);

	l.Insert(&t);
}

void CTowers::Add(CDisks *s,int x, int y)
{
	d[anz] = s;
	anz++;
	s->SetPosDisk(x,y);
}
	

void CTowers::Remove()
{
	d[anz-1] = NULL;
	anz--;
}

void CTowers::SetTowerPos(int x, int y) {
	t.SetPosition(x, y);
}


bool CTowers::hittest(CSprite *h) {
	if (h == &t)
		return TRUE;
	else
		return FALSE;
}

CTowers* CTowers::Wichtower(CSprite *s) {
	if (&t == s)
		return this;
	else
		return NULL;
}

int CTowers::GetAnz() {
	return anz;
}

int CTowers::GetSize() {		
	if (this->GetAnz() > 0)
		return d[(this->GetAnz()) - 1]->GetSize();
	else
		return 4;
}

int CTowers::GetTNum() {
	return TNum;
}

CDisks* CTowers::GetDisk() {
	return d[(this->GetAnz()) - 1];
}

bool CTowers::GameOver() {
	if (this->GetAnz() == 3)
		return TRUE;
	else
		return FALSE;
}