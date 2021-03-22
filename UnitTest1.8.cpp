#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1_8/Payment.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest18
{
	TEST_CLASS(UnitTest18)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Payment a;
			a.SetName("Misha");
			string name = "Misha";
			Assert::AreEqual(name, a.GetName());
		}
	};
}
