#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr5.5/Pr5.5.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {

            int number = 5;
            int expectedOnesCount = 2;
            int expectedRecursionDepth = 2;
            int recursionDepth = 0;


            int onesCount = countOnes(number, recursionDepth);

            Assert::AreEqual(expectedOnesCount, onesCount);
            Assert::AreEqual(expectedRecursionDepth, recursionDepth);
        }
    };
}