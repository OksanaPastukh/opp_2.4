#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_opp_2.4/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp24
{
	TEST_CLASS(UnitTestopp24)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			Vector d(4);
			d[0] = 1;
			d[1] = 2;
			d[2] = 3;
			d[3] = 4;
			c = d.Norma();
			Assert::AreEqual(c, 3);
		}
	};
}
