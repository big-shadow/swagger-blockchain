#include "stdafx.h"
#include "CppUnitTest.h"
#include "../swagger-blockchain/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace swaggertests
{		
	TEST_CLASS(SwaggerTests)
	{
	public:
		
		TEST_METHOD(TestMain)
		{
			int tmp = main();
			Assert::AreEqual(tmp, 0);
		}

	};
}