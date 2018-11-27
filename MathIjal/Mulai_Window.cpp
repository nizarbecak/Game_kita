#include "Mulai_Window.h"
#include <wx/stdpaths.h>
#include <wx/filename.h>

BEGIN_EVENT_TABLE(Mulai_Window, wxWindow)
	EVT_PAINT(Mulai_Window::Draw)
END_EVENT_TABLE();

Mulai_Window::Mulai_Window(wxFrame *parent)
	: wxWindow(parent, 1004)
{
	wxImageHandler *jpegLoader = new wxJPEGHandler();
	wxImage::AddHandler(jpegLoader);

	//Load Bitmap
	wxImage image_mulai(wxT("\mulai.jpg"), wxBITMAP_TYPE_JPEG);
	mulaiBitmap = new wxBitmap(image_mulai);
}

void Mulai_Window::Draw(wxPaintEvent &event)
{
	wxPaintDC pdc(this);
	pdc.DrawBitmap(*mulaiBitmap, wxPoint(0, 0), true);
}

Mulai_Window::~Mulai_Window()
{
	delete mulaiBitmap;
}
