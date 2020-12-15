#include "pch.h"
#include "CppUnitTest.h"
#include "../lab10.1/lab10.1.cpp"
#include <fstream>

#define TESTING

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101

{
	TEST_CLASS(UnitTest101)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char* fname{"t.txt"};
			int k = 0;

			ifstream fin(fname);
			int functionResult = k;

			Assert::AreEqual(0, functionResult);
		}
	};
}
