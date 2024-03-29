
// BelegDlg.h: Headerdatei
//

#pragma once
#include "CGame.h"

//#include "CTowers.h"

// CBelegDlg-Dialogfeld
class CBelegDlg : public CDialogEx
{
// Konstruktion
public:
	CBelegDlg(CWnd* pParent = nullptr);	// Standardkonstruktor

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BELEG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung


// Implementierung
protected:

	CDIB m_buff;		//Bildpuffer
	CSprite m_bkg;	//Spriteobjekt
	CSpriteList m_list;	//Spriteliste
	CSprite m_button[4]; //Buttonobjekte
	CSprite m_button2[3]; //Optionsknöpfe
	CSprite about; //about info
	CSprite icon; //Icon
	CSprite count;
	CSprite zahlen;
	CPoint m_mousePos;
	CSprite* m_Captured;
	bool links=TRUE;
	CGame TowerofHanoi;
	bool dd = TRUE;
	CTowers *From;
	CTowers *To;
	CSprite* m_captured=NULL;

	
	
	

	HICON m_hIcon;

	// Generierte Funktionen für die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()



	//Funktionen
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};
