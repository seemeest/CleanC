
#include "Module1.h"
#include "Module2.h"
#include <Windows.h>


int main()
{
	//Установка канала  ввода и вывода для русского языка
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);


	ConditionalModul1();

	ConditionalModul2();
}
