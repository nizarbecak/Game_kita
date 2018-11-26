#include "Menu_Frame.h"
#include "Menu_Window.h"

Menu_Frame::Menu_Frame(const wxString &title)
	: wxFrame(NULL, 1001, title)
{
	this->bg = new Menu_Window(this);
	this->SetInitialSize(wxSize(1000, 800));
}