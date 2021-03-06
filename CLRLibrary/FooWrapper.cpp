//#using "CSharpLib.dll"
#include "stdafx.h"
#include <msclr\auto_gcroot.h>

#include "FooWrapper.h"

using namespace System::Runtime::InteropServices;

class FooWrapperPrivate
{
public: msclr::auto_gcroot<FooClass^> foo;
};

FooWrapperPrivate * _private;

int FooWrapper::Multiply2(int value) {
	return _private->foo->Multiply2(value);
}

FooWrapper::FooWrapper()
{
	_private = new FooWrapperPrivate();
	_private->foo = gcnew FooClass();
}

FooWrapper::~FooWrapper()
{
	delete _private;
}