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
	private:
		MenuItem * currentItem;

	protected:


	public:
		Menu(); //constructor
		void add(MenuItem * item);
		void start();
		void process();
		void show();
};

#endif

