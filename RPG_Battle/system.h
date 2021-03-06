#pragma once
#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

class System
{
public:
	System();
	~System();

	bool init();
	void shutDown();
	void run();

	LRESULT CALLBACK messageHandler(HWND, UINT, WPARAM, LPARAM);

private:
	bool frame();
	void initWindows(int&, int&,bool);
	void shutDownWindows();
private:
	LPCWSTR m_applicationName;
	HINSTANCE m_hinstance;
	HWND m_hwnd;
	bool m_fullScreen;
	bool m_done;

private:

};

static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

static System* ApplicationHandle = 0;
