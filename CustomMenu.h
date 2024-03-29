#pragma once


struct CMenuItemInfo
{
	CString m_ItemText;  // 菜单项文本
	int     m_ItemIndex; // 菜单项索引
	int     m_ItemID;    // 菜单标记 0分隔条,其他普通菜单
};



// CCustomMenu 命令目标

class CCustomMenu : public CMenu
{
public:
	CCustomMenu();
	virtual ~CCustomMenu();

	void DrawItemText(CDC* pDC, CString str, CRect rect);       // 绘制菜单项文本
	void DrawComMenu(CDC* pDC, CRect rect, BOOL select);      // 绘制菜单项背景图片
	void DrawSeparater(CDC* pDC, CRect rect);                 // 绘制分隔条
	BOOL ChangeMenuItem(CMenu* menu);                         // 修改菜单项信息

    // 重绘菜单项
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	// 设置菜单项大小
	virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
public:
	CMenuItemInfo m_ItemLists[10]; // 菜单项信息
	int			  m_ImageIndex;    // 图像索引
};


