#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include <iostream>
#include <cmath>

#include "Evaluate_Decorator.hpp"

using namespace std;

class Ceil : public EvaluateDecorator
{
	private:
		Base* child;

	public:
		/* Constructors */
		Ceil() {};
		Ceil(Base* child_) { this->child = child_; };

		double evaluate() { return ceil(this->child->evaluate()); };
};

#endif
