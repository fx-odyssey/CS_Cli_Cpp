// CliDll.cpp
#include "CliDll.h"

using namespace CliDll;

CliDll::Arith::Arith(){}

CliDll::Arith::~Arith(){}

int CliDll::Arith::AddCli(int a, int b)
{
	return Add(a, b);
}

int CliDll::Arith::SubCli(int a, int b)
{
	return Sub(a, b);
}

int CliDll::Arith::MulCli(int a, int b)
{
	return Mul(a, b);
}

int CliDll::Arith::DivCli(int a, int b)
{
	return Div(a, b);
}