
// DIPU.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CDIPUApp:
// �� Ŭ������ ������ ���ؼ��� DIPU.cpp�� �����Ͻʽÿ�.
//

class CDIPUApp : public CWinApp
{
public:
	CDIPUApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CDIPUApp theApp;