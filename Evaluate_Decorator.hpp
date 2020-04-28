#ifndef __EVALUATE_DECORATOR_HPP__
#define __EVALUATE_DECORATOR_HPP__

#include <iostream>
#include <string>

#include "Decorator.hpp"

using namespace std;

class EvaluateDecorator : public Decorator
{
	private:
		Base* child;

	public:
		/* Constructors */
		EvaluateDecorator() {};
		EvaluateDecorator(Base* child_) { this->child = child_; };

		string stringify() { return ""; };
		virtual double evaluate() = 0;
};

#endif
