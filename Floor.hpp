#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__

#include <iostream>
#include <cmath>

#include "Evaluate_Decorator.hpp"

using namespace std;

class Floor : public EvaluateDecorator
{
	private:
		Base* child;

	public:
		/* Constructors */
		Floor() {};
		Floor(Base* child_) { this->child = child_; };

		double evaluate() { return floor(this->child->evaluate()); };
};

#endif
