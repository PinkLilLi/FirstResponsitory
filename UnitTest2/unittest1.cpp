#include "stdafx.h"
#include "CppUnitTest.h"
#include"..\Calculate\Add.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Assert::AreEqual(3,Add(1,2));
		}

	};
}