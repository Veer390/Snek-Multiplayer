#include "takeinput.h"



WhichButtonPressed Input::input(Keyboard& kbd)
{
	WhichButtonPressed Button;
	if (kbd.KeyIsPressed(0x68))
	{
		Button = numpad8key;
	}
	else if (kbd.KeyIsPressed(0x62))
	{
		Button = numpad2key;
	}
	else if (kbd.KeyIsPressed(0x66))
	{
		Button = numpad6key;
	}
	else if (kbd.KeyIsPressed(0x64))
	{
		Button = numpad4key;
	}
	else if (kbd.KeyIsPressed(0x57))
	{
		Button = Wkey;
	}
	else if (kbd.KeyIsPressed(0x53))
	{
		Button = Skey;
	}
	else if (kbd.KeyIsPressed(0x41))
	{
		Button = Akey;
	}
	else if (kbd.KeyIsPressed(0x44))
	{
		Button = Dkey;
	}
	else Button = SED;
	return Button;
}


