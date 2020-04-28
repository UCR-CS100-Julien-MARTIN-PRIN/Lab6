#ifndef __STRINGIFY_DECORATOR_HPP__
#define __STRINGIFY_DECORATOR_HPP__

#include <iostream>
#include <string>

#include "Decorator.hpp"

using namespace std;

class StringifyDecorator : public Decorator
{
	private:
		Base* child;

	public:
		/* Constructor */
		StringifyDecorator() {};
		StringifyDecorator(Base* child_) { this->child = child_; };

		virtual string stringify() = 0;
		double evaluate() { return 0; };
};

#endif
