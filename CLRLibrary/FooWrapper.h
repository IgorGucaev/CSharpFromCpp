class FooWrapperPrivate;

class __declspec(dllexport)  FooWrapper
{
	private: FooWrapperPrivate* _private;

public:
  FooWrapper();
  ~FooWrapper();
  int Multiply2(int value);
};