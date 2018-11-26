#include "wx\wx.h"
#include "Menu_Frame.h"

class MyApp : public wxApp
{
public:
	virtual bool OnInit();
};

IMPLEMENT_APP(MyApp);
DECLARE_APP(MyApp);

bool MyApp::OnInit()
{
	Menu_Frame *frame = new Menu_Frame("Math Ijal Si Komodo Pinter");
	frame->Show(true);

	return true;
}