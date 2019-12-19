#include "stdafx.h"
#include "CDisks.h"






CDisks::CDisks()
{

}

CDisks::CDisks(int z)
{
	Size = z;
}


CDisks::~CDisks()
{
}

void CDisks::DiskInit(CSpriteList& l, int n)
{
	d.Load("disks.bmp", CSize(308, 85));
	d.SetZ(110);
	d.SetPosition(1000,1000);
	d.SetSpriteNumber(0, n);
	l.Insert(&d);
}

void CDisks::SetPosDisk(int x, int y) {
	d.SetPosition(x, y);
}

int CDisks::GetSize() {
	return Size;
}



