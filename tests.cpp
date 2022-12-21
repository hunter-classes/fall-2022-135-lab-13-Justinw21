#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("A")
{
    std::string result = "1 2 3 4 5 6 7 8 9 10";
    std::string result2 = "-2 -1 0 1 2 3 4 5";
    std::string result3 = "";
    CHECK(printRange(1,10) == result);
    CHECK(printRange(-2,5) == result2);
    CHECK(printRange(1,0) == result3);
}

TEST_CASE("B")
{
    CHECK(sumRange(1,10) == 55);
    CHECK(sumRange(10,0) == 0);
    CHECK(sumRange(1,1) == 1);
}

TEST_CASE("C")
{
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;
    CHECK(sumArray(arr,size) == 43);
    CHECK(sumArray(arr,5) == 34);
    CHECK(sumArray(arr,1) == 12);
}

TEST_CASE("D")
{
    CHECK(isAlphanumeric("ABCD") == 1);
    CHECK(isAlphanumeric("AB21123-AASUIDH") == 0);
    CHECK(isAlphanumeric("") == 1);
}

TEST_CASE("E")
{
    CHECK(nestedParens("(())") == 1);
    CHECK(nestedParens("(()") == 0);
    CHECK(nestedParens("") == 1);
    CHECK(nestedParens("(AB)") != 1);
}