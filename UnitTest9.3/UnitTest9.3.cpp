#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofia9.3/ChyrunSofia9.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest93
{
	TEST_CLASS(UnitTest93)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int N = 3, s = 0;
			Price* p = new Price[N];
			p[0].cost = 9;
			p[1].cost = 27;
			p[2].cost = 99;
			t = (int)MinSerbal(p, N);
			Assert::AreEqual(t, 9);
		}
	};
}
