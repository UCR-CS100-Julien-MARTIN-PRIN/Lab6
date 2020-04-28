#include "Operations.hpp"
#include "Decorator.hpp"
#include "Evaluate_Decorator.hpp"
#include "Stringify_Decorator.hpp"
#include "Abs.hpp"
#include "Ceil.hpp"
#include "Floor.hpp"
#include "Trunc.hpp"
#include "Parenthesis.hpp"
#include "base.hpp"

TEST(TestAbs, AbsEvaluate) {
	Base* test = new Op(-10);
	Abs* testAbs = new Abs(test);
	EXPECT_EQ(testAbs->evaluate(), 10);
}

TEST(TestCeil, CeilEvaluate) {
	Base* test = new Op(3.56);
	Ceil* testCeil = new Ceil(test);
	EXPECT_EQ(testCeil->evaluate(), 4);
}

TEST(TestFloor, FloorEvaluate) {
	Base* test = new Op(28.67);
	Floor* testFloor = new Floor(test);
	EXPECT_EQ(testFloor->evaluate(), 28); 
}

TEST(TestParent, ParenthesisStringify) {
	Base* test1 = new Op(10.2);
	Base* test2 = new Op(20.5);
	Base* test3 = new Add(test1, test2);
	Parenthesis* res = new Parenthesis(test3);
	EXPECT_EQ(res->stringify(),"(10.200000 + 20.500000)");
}

TEST(TestTrunc, TruncStringify) {
	Base* test1 = new Op(7);
	Base* test2 = new Op(4);
	Base* test3 = new Add(test1, test2);
	Trunc* testTrunc = new Trunc(test3);
	EXPECT_EQ(testTrunc->stringify(), "11.000000");                
}

TEST(TestTrunc, TruncStringify2) {
	Base* test1 = new Op(7);
	Base* test2 = new Op(4);
	Base* test3 = new Sub(test1, test2);
	Trunc* testTrunc = new Trunc(test3);
	EXPECT_EQ(testTrunc->stringify(), "3.000000");
}

TEST(TestCombination, Combination) {
	Base* test1 = new Op(4);
	Base* test2 = new Op(7);
	Base* test3 = new Sub(test1, test2);
	Abs* testAbs = new Abs(test3);
	Trunc* testTrunc = new Trunc(testAbs);
	EXPECT_EQ(testTrunc->stringify(), "3.000000");
}
