// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "stdafx.h"
#include "FooWrapper.h"
#include "stdio.h"
#include "conio.h"
#include <Windows.h>

int main()
{
	int i = 0;
	FooWrapper wrapper;
	int result = wrapper.Multiply2(2);

	printf("Result= %d\n", result);

	_getch();
    return 0;
}

