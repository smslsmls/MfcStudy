
// MfcStartDlg.h: 헤더 파일
//

#pragma once


// CMfcStartDlg 대화 상자
class CMfcStartDlg : public CDialogEx
{
// 생성입니다.
public:
	CMfcStartDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCSTART_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnTest();
	// 헝가리안표기법
	// (m_)(자료형)(변수이름)
	// m_이라는것은 멤버라는것
	// 변수가 int형 : n
	// double : d
	// float : f
	// string : str
	// 파일변경 : ctl+k,o
	// 솔루션 내 전체 검색 : shift+ctl+f
	int m_nNum;
	int m_nNum2;
};
