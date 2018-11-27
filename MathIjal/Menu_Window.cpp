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

	//Load Bitmap
	wxImage image_menu(wxT("\menu.png"), wxBITMAP_TYPE_PNG);
	menuBitmap = new wxBitmap(image_menu);

	wxImage image_mulai(wxT("\mulai_text.png"), wxBITMAP_TYPE_PNG);
	mulaiBitmap = new wxBitmap(image_mulai);

	wxImage image_cara(wxT("\cara_text.png"), wxBITMAP_TYPE_PNG);
	caraBitmap = new wxBitmap(image_cara);

	wxImage image_pengaturan(wxT("\pengaturan_text.png"), wxBITMAP_TYPE_PNG);
	pengaturanBitmap = new wxBitmap(image_pengaturan);

	wxImage image_keluar(wxT("\keluar_text.png"), wxBITMAP_TYPE_PNG);
	keluarBitmap = new wxBitmap(image_keluar);
}

void Menu_Window::Draw(wxPaintEvent &event)
{
	wxPaintDC pdc(this);
	pdc.DrawBitmap(*menuBitmap, wxPoint(0, -5), true);
	pdc.DrawBitmap(*mulaiBitmap, wxPoint(277, 250), true);
	pdc.DrawBitmap(*caraBitmap, wxPoint(277, 350), true);
	pdc.DrawBitmap(*pengaturanBitmap, wxPoint(277, 450), true);
	pdc.DrawBitmap(*keluarBitmap, wxPoint(277, 550), true);
}

Menu_Window::~Menu_Window()
{
	delete menuBitmap;
	delete mulaiBitmap;
	delete caraBitmap;
	delete pengaturanBitmap;
	delete keluarBitmap;
}
