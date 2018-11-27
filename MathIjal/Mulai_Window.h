#pragma once
#include "wx\wx.h"

class Mulai_Window :
	public wxWindow
{
public:
	Mulai_Window(wxFrame *parent);
	~Mulai_Window();
	void Draw(wxPaintEvent &event);
private:
	wxBitmap *mulaiBitmap = nullptr;
	DECLARE_EVENT_TABLE();
};

