#include "stdafx.h"
#include "CGame.h"


CGame::CGame() :Disk1(1), Disk2(2), Disk3(3), Tower1(1), Tower2(2), Tower3(3) 
{
}


CGame::~CGame()
{
}

void CGame::GameInit(CSpriteList &l)
{
	Disk1.DiskInit(l, 0);			//Scheiben laden
	Disk2.DiskInit(l, 1);
	Disk3.DiskInit(l, 2);

	Tower1.TowerInit(l);				//Türme laden
	Tower2.TowerInit(l);
	Tower3.TowerInit(l);

	//positionen festlegen Türme
	Tower1.SetTowerPos(-80, 150);
	Tower2.SetTowerPos(130, 50);
	Tower3.SetTowerPos(340, 150);

	//Add Funktion 3x auf ersten Turm
		
	Tower1.Add(&Disk3,10,360);
	Tower1.Add(&Disk2,10,300);
	Tower1.Add(&Disk1,10,240);
	
}

bool CGame::hittest(CSprite *h) {
	if (Tower1.hittest(h) || Tower2.hittest(h) || Tower3.hittest(h))
		return TRUE;
	else
		return FALSE;
}

void CGame::Add( CDisks *s, CTowers *z)
{
	if (z->GetTNum() == 1) {
		if (z->GetAnz() == 0)
			z->Add(s, 10, 360);
		else if (z->GetAnz() == 1)
			z->Add(s, 10 , 300);
		else if (z->GetAnz() == 2)
			z->Add(s, 10, 240);
	}
	else if (z->GetTNum() == 2) {
		if (z->GetAnz() == 0)
			z->Add(s, 230, 270);
		else if (z->GetAnz() == 1)
			z->Add(s, 230, 210);
		else if (z->GetAnz() == 2)
			z->Add(s, 230, 150);
	}
	else if (z->GetTNum() == 3) {
		if (z->GetAnz() == 0)
			z->Add(s, 435, 360);
		else if (z->GetAnz() == 1)
			z->Add(s, 435, 300);
		else if (z->GetAnz() == 2)
			z->Add(s, 435, 240);
	}

}

void CGame::Remove(CTowers *r) {
	r->Remove();
}


CTowers* CGame::Wichtower(CSprite *s) {
	if (Tower1.Wichtower(s) != NULL)
		return &Tower1;
	if (Tower2.Wichtower(s) != NULL)
		return &Tower2;
	if (Tower3.Wichtower(s) != NULL)
		return &Tower3;
}

bool CGame::GameOver() {
	if (Tower3.GameOver())
		return TRUE;
	else
		return FALSE;
}


