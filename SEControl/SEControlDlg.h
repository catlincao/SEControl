
// SEControlDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CSEControlDlg �Ի���
class CSEControlDlg : public CDialogEx
{
// ����
public:
	CSEControlDlg(CWnd* pParent = NULL);	// ��׼���캯��
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SECONTROL_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	int cam_index;   //�������
	CComboBox m_choseCAM;
	LPCTSTR lpPara;   // ������Ĳ���
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCombo1();
	// ����б�
	void ComListInit();
	afx_msg void OnBnClickedOpen();
};
