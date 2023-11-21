#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB13.2.1/LAB13.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1321
{
	TEST_CLASS(UnitTest1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 2;

			// Act
			int result = SQR(x);

			// Assert
			Assert::AreEqual(result, 4);
		}
	};
}
