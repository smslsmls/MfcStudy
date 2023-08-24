﻿
// MfcCImageDlg.h: 헤더 파일
//

#pragma once


// CMfcCImageDlg 대화 상자
class CMfcCImageDlg : public CDialogEx
{
private:
	CImage m_image;
// 생성입니다.
public:
	CMfcCImageDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCCIMAGE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
private:
	BOOL VaildImgPos(int x, int y);
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnImage();
	afx_msg void OnBnClickedBtnSave();
	afx_msg void OnBnClickedBtnLoad();
	afx_msg void OnBnClickedBtnAction();
	void UpdateDisplay();
	void MoveRect();
	void DrawCircle(unsigned char* fm, int i, int j, int nRadius, int nGray);
	bool IsInCircle(int i, int j, int nCentorX, int nCentorY, int nRadius);
	afx_msg void OnBnClickedBtnRand();
};
