#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

float tester(float a, float b)
{
	return a + b;
}
namespace UnitTest_cpp
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: insira seu código de teste aqui
			float f = tester(1, 1);
			float s = 2;
			Assert::AreEqual(s, f);
		}

	};
}