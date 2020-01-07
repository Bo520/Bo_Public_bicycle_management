
// CS20180080331Dlg.h: 头文件
// 
#include <cstring>
#include <vector>
#include <cstdlib>

using namespace std;

#pragma once


// CCS20180080331Dlg 对话框
class CCS20180080331Dlg : public CDialogEx
{
// 构造
public:
	CCS20180080331Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CS20180080331_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// 查询余量时输入的stationID
	float m_stationid_remain;
	// 查询地址时输入的stationID
	float m_stationid_addrass;
	afx_msg void OnBnClickedButtoninputdata();
	//用于成列输出站点信息供选择
	CListBox m_info_display;
	afx_msg void OnBnClickedButtonstationlocation();
	CComboBox m_combobox_display;
	int m_edit_id_input;
	afx_msg void OnBnClickedButtonsearchbyid();
	afx_msg void OnBnClickedButtontrackuser();




	void ClearWindow() //刷新用户区域
	{
		RECT m_cRectLayerWin;
		m_cRectLayerWin.left = 0;
		m_cRectLayerWin.top = 0;
		m_cRectLayerWin.right = 1000;
		m_cRectLayerWin.bottom = 1000;
		InvalidateRect(&m_cRectLayerWin);
		UpdateWindow();
	}

	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();

	CString str = _T("");

	void clear_edite_contral()
	{

		//清空显示信息得编辑框
		SetDlgItemText(IDC_EDIT_Address, str);
		SetDlgItemText(IDC_EDIT_totalDocks, str);
		SetDlgItemText(IDC_EDIT_inservice, str);
		SetDlgItemText(IDC_EDIT_stationID, str);
		SetDlgItemText(IDC_EDIT_lattitude, str);
		SetDlgItemText(IDC_EDIT_longitude, str);
		SetDlgItemText(IDC_EDIT_status, str);
		SetDlgItemText(IDC_EDIT_stationNAME, str);
	}
//	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedButtontrackusers();
	// 储存几个用户	// 储存几个用户
	CComboBox m_combox_track_users;
	// 储存几个用户	// 储存几个用户
	CComboBox m_combox_track_users2;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnBnClickedButton2();
	// 用于存放几个用户
	CComboBox m_combox_users;
	// 用于存放几个用户
	CComboBox m_combox_users2;
	// 画图的控件变量
	CStatic m_draw_map;
	afx_msg void OnCbnSelchangeCombo1display();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};




//一些实现函数

typedef struct {
	int StationID ;
	CString StationID_cst;
	CString StationName ;
	CString Address ;
	int TotalDocks;
	CString TotalDocks_cst;
	int DocksinService ;
	CString DocksinService_cst;
	CString Status ;
	float Latitude ;
	float Latitude_2;
	CString Latitude_cst;
	CString Latitude_cst_2;
	float Longitude;
	float Longitude_2;
	CString Longitude_cst;
	CString Longitude_cst_2;
	CString Location1;
	CString Location2;
}splitedinfo; //以结构体形式存放切分好的各部分用于后续处理

