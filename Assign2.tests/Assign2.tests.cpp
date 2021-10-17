#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assign2tests
{
	TEST_CLASS(Assign2tests)
	{
	public:
		
		TEST_METHOD(getPerimeter_0length_5)
		{
			// arrange
			int len = 0;
			int wid = 5;
			int EXPECTED_PER = 5;

			// act
			int actual = getPerimeter(&len, &wid);

			// assert
			Assert::AreEqual(EXPECTED_PER, actual);
		}

		TEST_METHOD(getArea_0length_0)
		{
			// arrange
			int len = 0;
			int wid = 5;
			int EXPECTED_AREA = 0;

			// act
			int actual = getArea(&len, &wid);

			// assert
			Assert::AreEqual(EXPECTED_AREA, actual);
		}
		

	};
}
