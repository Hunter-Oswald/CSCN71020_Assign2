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
		
		// set length and set width functions
		TEST_METHOD(setLength_outsideOfRangeAbove_noChange)
		{
			// arrange
			int rectLength = 3;
			int setLen = 100;
			int EXPECTED_LENGTH = 3;

			// act
			setLength(setLen, &rectLength);

			// assert
			Assert::AreEqual(EXPECTED_LENGTH, rectLength);
		}

		TEST_METHOD(setWidth_outOfRangeAbove_noChange)
		{
			// arrange
			int rectWidth = 85;
			int setWid = 100;
			int EXPECTED_WID = 85;

			// act
			setWidth(setWid, &rectWidth);

			// assert
			Assert::AreEqual(EXPECTED_WID, rectWidth);
		}

		TEST_METHOD(setLength_outOfRangeBelow_noChange)
		{
			// arrange
			int rectLength = 45;
			int setLen = 0;
			int EXPECTED_LEN = 45;

			// act
			setLength(setLen, &rectLength);

			// assert
			Assert::AreEqual(EXPECTED_LEN, rectLength);
		}

		TEST_METHOD(setWidth_outOfRangeBelow_noChange)
		{
			// arrange
			int rectWidth = 34;
			int setWid = 0;
			int EXPECTED_WID = 34;

			// act
			setWidth(setWid, &rectWidth);

			// assert
			Assert::AreEqual(EXPECTED_WID, rectWidth);
		}

		TEST_METHOD(setLength_averageInput_changesRect)
		{
			// arrange
			int rectLength = 4;
			int setLen = 7;
			int EXPECTED_LEN = 7;

			// act
			setLength(setLen, &rectLength);

			// assert
			Assert::AreEqual(EXPECTED_LEN, rectLength);
		}

		TEST_METHOD(setWidth_averageInput_changesRect)
		{
			// arrange
			int rectWidth = 48;
			int setWid = 99;
			int EXPECTED_WID = 99;

			// act
			setLength(setWid, &rectWidth);

			// assert
			Assert::AreEqual(EXPECTED_WID, rectWidth);
		}

	};
}
