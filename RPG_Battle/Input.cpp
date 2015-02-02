#include "Input.h"

Input::Input()
{
	m_directInput = NULL;
	m_keyboard = NULL;
	m_mouse = NULL;
	m_mouseX = NULL;
	m_mouseY = NULL;
	m_screenHeight = NULL;
	m_screenWidth = NULL;
}

Input::~Input()
{

}

bool Input::init(HINSTANCE hinstane,HWND hwnd,int screenWidth,int screenHeight)
{
	HRESULT result;

	m_screenWidth = screenWidth;
	m_screenHeight = screenHeight;

	m_mouseX = 0;
	m_mouseY = 0;

	result = DirectInput8Create(hinstance,DIRECTINPUT)
}