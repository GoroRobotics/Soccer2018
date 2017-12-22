// Menu.h

#ifndef _MENU_h
#define _MENU_h

#include "MenuItem.h"

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

class Menu
{
 protected:


 public:
	void init();
	void add(MenuItem item);

};

#endif

