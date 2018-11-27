#include "Mulai_Frame.h"
#include "Mulai_Window.h"

Mulai_Frame::Mulai_Frame(const wxString &title)
	: wxFrame(NULL, 1003, title)
{
	this->bg = new Mulai_Window(this);
	this->SetInitialSize(wxSize(1000, 800));
}
