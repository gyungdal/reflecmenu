#pragma once

#include <stdio.h>
#include <windows.h>

#include "Menu.h"

#define CLASS_NAME L"Reflec Beat Touch Launcher"

#define ITEM_HEIGHT 240
#define ITEM_PADDING 20
#define FONT_SIZE 20

class Display
{
	public:
		Display(HINSTANCE hInstance, Menu *mInst);
		~Display(void);

		void Tick();
		int GetSelectedItem(double x, double y);
		bool WasClosed();

	private:
		HINSTANCE inst;
		HWND hwnd;
};
