// Meta.h: interface for the CMeta class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_META_H__3BF12438_66A2_4CD5_A0D0_C78778AE217F__INCLUDED_)
#define AFX_META_H__3BF12438_66A2_4CD5_A0D0_C78778AE217F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Element.h"

class CMeta : public CElement  
{
	DECLARE_DYNAMIC(CMeta)
public:
	virtual void UpdateView();
	virtual void MoveElement(POINT potOffset);
	virtual void MoveInCell(POINT potTracker);
	void Load(IXMLDOMElementPtr pGO);
	virtual void Save(IXMLDOMElementPtr pRoot);
	CString m_sPicFile;
	virtual CElement * Clone(long lCmdId,long lStatus);
	HENHMETAFILE m_hMeta;
	virtual bool RInR(LPCRECT lpRect);
	virtual void Format(long left,long top,long right,long bottom,long flag);
	virtual long HitTest(long x,long y);
	virtual void DrawTracker(CDC *pDC);
	virtual void DrawHotPoints(CDC *pDC);
	virtual void Draw(CDC *pDC);
	virtual long Bottom();
	virtual long Top();
	virtual long Right();
	virtual long Left();
	long m_ly2;
	long m_lx2;
	long m_ly1;
	long m_lx1;
	long m_loy2;
	long m_lox2;
	long m_loy1;
	long m_lox1;
	CMeta();
	virtual ~CMeta();

};

#endif // !defined(AFX_META_H__3BF12438_66A2_4CD5_A0D0_C78778AE217F__INCLUDED_)
