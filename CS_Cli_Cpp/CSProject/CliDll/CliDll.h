// CliDll.h
#pragma once
#include <iostream>
#include "CppDll.h"

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace System::Collections::Generic;
using namespace System::Collections;
using namespace std;

#pragma comment(lib, "CppDll.lib")
#pragma managed
namespace CliDll {

	public ref class Arith
	{
	public:
		Arith();
		~Arith();

		int AddCli(int a, int b);
		int SubCli(int a, int b);
		int MulCli(int a, int b);
		int DivCli(int a, int b);
	};
}