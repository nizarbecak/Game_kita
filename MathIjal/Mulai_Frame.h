#pragma once
#include "wx\wx.h"

class Mulai_Window;

class Mulai_Frame :
	public wxFrame
{
public:
	Mulai_Frame(const wxString &title);
private:
	Mulai_Window *bg;
};

