#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__

#include <iostream>
#include <string>
#include <cmath>

#include "base.hpp"

using namespace std;

class Decorator : public Base
{
	private:
		Base* child;

	public:
		/* Constructors */
		Decorator() {};
		Decorator(Base* child_) { this->child = child_; };

		virtual double evaluate() = 0;
		virtual std::string stringify() = 0;
};

#endif
