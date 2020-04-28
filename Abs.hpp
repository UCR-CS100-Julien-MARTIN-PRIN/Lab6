#ifndef __ABS_HPP__
#define __ABS_HPP__

#include <iostream>
#include <cmath>

#include "Evaluate_Decorator.hpp"

using namespace std;

class Abs : public EvaluateDecorator
{
	private:
		Base* child;

	public:
		/* Constructors */
		Abs() {};
		Abs(Base* child_) { this->child = child_; };

		double evaluate() { return abs(this->child->evaluate()); };
};

#endif
