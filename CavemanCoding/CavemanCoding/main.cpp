#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void welcome() {


	cout << " _         _      ______      _             _____        _____         _     _       ______        " << endl;
	cout << "| |       | |    | _____|    | |           |  ___|      |  _  |       | |   | |     | _____|       " << endl;
	cout << "| |   _   | |    | |___      | |          |  |         |  | |  |     |  |   |  |    | |___         " << endl;
	cout << "| |  | |  | |    | ____|     | |         |  |         |  |   |  |    |   |_|   |    | ____|        " << endl;
	cout << " | | |_| | |     | |____     | |____      |  |___      |  |_|  |     | |     | |    | |____        " << endl;
	cout << "  |_|   |_|      |______|    |______|      |_____|      |_____|      |_|     |_|    |______|       " << endl;
	cout << endl;
	cout << endl;
}

int main()
{



	string Menu[3] = { "Start Game", "Options", "Exit" };
	int pointer = 0;

	while (true)
	{
		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		welcome();

		for (int i = 0; i < 3; ++i)
		{
			if (i == pointer)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				cout << Menu[i] << endl;
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				cout << Menu[i] << endl;
			}
		}

		while (true)
		{
			if (GetAsyncKeyState(VK_UP) != 0)
			{
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 2;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) != 0)
			{
				pointer += 1;
				if (pointer == 3)
				{
					pointer = 0;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) != 0)
			{
				switch (pointer)
				{
				case 0:
				{
					cout << "\n\n\nStarting new game...";
					Sleep(1000);
				} break;
				case 1:
				{
					cout << "\n\n\nThis is the options...";
					Sleep(1000);
				} break;
				case 2:
				{
					return 0;
				} break;
				}
				break;
			}
		}

		Sleep(100);
	}

	return 0;
}
