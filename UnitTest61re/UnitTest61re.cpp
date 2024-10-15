#include "pch.h"
#include "CppUnitTest.h"
#include "../lab61re/lab61re.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61re
{
	TEST_CLASS(UnitTest61re)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr1[] = { -2, -4, -6, 1, 2, 3 };
			Assert::AreEqual(sum(arr1, 6), -12);
		}
	};
}
