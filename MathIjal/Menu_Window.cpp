#include "Menu_Window.h"
#include <wx/stdpaths.h>
#include <wx/filename.h>

BEGIN_EVENT_TABLE(Menu_Window, wxWindow)
EVT_PAINT(Menu_Window::Draw)
END_EVENT_TABLE();

Menu_Window::Menu_Window(wxFrame *parent)
	: wxWindow(parent, 1002)
{
	wxImageHandler *pngLoader = new wxPNGHandler();
	wxImage::AddHandler(pngLoader);
	this->LoadMenuBitmap();
}

void Menu_Window::LoadMenuBitmap()
{
	wxImage image(wxT("\menu.png"), wxBITMAP_TYPE_PNG);

	menuBitmap = new wxBitmap(image);
}

void Menu_Window::Draw(wxPaintEvent &event)
{
	wxPaintDC pdc(this);
	pdc.DrawBitmap(*menuBitmap, wxPoint(0, 0), true);
}

Menu_Window::~Menu_Window()
{
	delete menuBitmap;
}
