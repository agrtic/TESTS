#include <gtest/gtest.h>
#include <string>
using namespace std;

string add(string a,string b);

TEST(AddTest,BasicTest){
     EXPECT_EQ(add("Hello"," World"),"Hello World");
}

TEST(AddTest,StringsWithSpaces){
     EXPECT_EQ(add("Hello","World"),"HelloWorld");
     EXPECT_EQ(add("", "World"), "World");
}

TEST(AddTest,EmptyStrings){
     EXPECT_EQ(add("",""),"");
}
