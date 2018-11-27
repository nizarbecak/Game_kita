#pragma once
#include "wx\wx.h"

class Menu_Window :
	public wxWindow
{
public:
	Menu_Window(wxFrame *parent);
	~Menu_Window();
	void Draw(wxPaintEvent &event);
private:
	wxBitmap *menuBitmap = nullptr;
	wxBitmap *mulaiBitmap = nullptr;
	wxBitmap *pengaturanBitmap = nullptr;
	wxBitmap *caraBitmap = nullptr;
	wxBitmap *keluarBitmap = nullptr;
	DECLARE_EVENT_TABLE();
};

