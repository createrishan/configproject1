#include<iostream>

#include<gtest/gtest.h>
#include<stdio.h>

using namespace std;
//-------WhiteBoxTest Cases#1 for Sum of given numbers

int SumEven(int num1, int num2)
{
    return num1 + num2;
}

//-------- whiteboxtest cases#2 for Area of triangle

int AreaOfAtriangle(int height, int base)
{
    return (height * base) / 2;
}

//---------- whiteboxtesting case#3 for area of rectangle
int AreaOfARectangle(int length, int breath)
{
    return length * breath;
}

//------- whiteboxtesting case#4 for area of a square

int AreaOfASquare(int l , int b )
{
    return  l*b;
}
//------ whiteboxtesting case#4 for volume of Parallelepiped
int VolumeOfParallelepiped(int length, int width, int height)
{
    return   length * width * height;
}

TEST(Sumeven, SumEven) {
    EXPECT_EQ(10, SumEven(2, 8));
}


   
   TEST(Trianglesuite, Area) {
       EXPECT_EQ(15, AreaOfAtriangle(5, 6));

   }
    
   TEST(rectangle, Area) {
       EXPECT_EQ (20, AreaOfARectangle(4, 5));

   }
    TEST(square, Area) {
       EXPECT_EQ(4, AreaOfASquare(2, 2));

   }
     TEST(Parallelepiped, volume) {
       EXPECT_EQ(27, VolumeOfParallelepiped(3, 3, 3));

   }






int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    int result = RUN_ALL_TESTS();
    return result;
}


//--------------Blackboxtesting-------------//



//BlackBoxTestCase#1 Palindrom number verifcation

TEST(PalindrommeTests, PalindromeOfDigits) {
    EXPECT_TRUE(true, Palindrome(12321));
    EXPECT_FALSE(false, Palindrome(12343));
}

//BlackBoxTestcase#2 factorialofinteger

TEST(factorialTests, factorialofnumber) {
    EXPECT_TRUE( true,factorial(4));
    EXPECT_FALSE( false, factorial(6));
}

// BlackBoxTestcase# 3  Multiplicationofnumber

TEST(multiplicationTests, multipilcationofnumber) {
    EXPECT_TRUE( true, factorial(4));
    EXPECT_FALSE( false,factorial(5));
}

// BlackBoxTestcase# 4  Print Number Entered by User


TEST(Numberenterted, Enternumber) {
    EXPECT_TRUE(true, number(23));
    EXPECT_FALSE(false, number(25));
}

// BlackBoxTestcase# 5 Display all Factors of a Number

TEST(FactorofNumber, Enternumber) {
    EXPECT_TRUE(true, factorofnumber(60));
    EXPECT_FALSE(false, factorofnumber(40));
}
