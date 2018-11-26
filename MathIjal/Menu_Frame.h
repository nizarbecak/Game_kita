#pragma once
#include "wx\wx.h"

class Menu_Window;

class Menu_Frame :
	public wxFrame
{
public:
	Menu_Frame(const wxString &title);
private:
	Menu_Window *bg;
	Menu_Window *mulai;
	Menu_Window *cara;
	Menu_Window *pengaturan;
	Menu_Window *keluar;
};

