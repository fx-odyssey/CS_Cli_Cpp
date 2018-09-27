//CppDll.h
#pragma once
#include <stdio.h>
#include <stdlib.h>

#ifdef CPPDLL_EXPORTS
#define CPP_EXPORTS __declspec(dllexport)
#else
#define CPP_EXPORTS __declspec(dllimport)
#endif

extern "C" CPP_EXPORTS int Add(int a, int b);

extern "C" CPP_EXPORTS int Sub(int a, int b);

extern "C" CPP_EXPORTS int Mul(int a, int b);

extern "C" CPP_EXPORTS  int Div(int a, int b);


