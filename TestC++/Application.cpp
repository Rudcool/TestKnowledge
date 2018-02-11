#include "stdafx.h"
#include "Application.h"
#include <iostream>
#include <Windows.h>


Application::Application()
{
}


Application::~Application()
{
}

void Application::doStepOfProgram() {


	switch (status) {
	case greeting: {

		std::cout << "Здравствуйте, уважаемый пользователь! \nДобро пожаловать в программу Test C/C++!" << std::endl;
		HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
		DWORD dw = 0u;
		char cadr[] = "1234567899990";
		const char* ptr;
		int i = 12;

		
		COORD pos = { 0, 2 };
		while (i) {
			
			for (ptr = cadr; *ptr != '0'; *ptr++) {
				FillConsoleOutputCharacter(hout, *ptr, 1u, pos, &dw);
				Sleep(200u);
				--i;
				if (i < 3) {
					break;
				}
				
				
			}
		}
		system("cls");

		

	}
	
	}
}