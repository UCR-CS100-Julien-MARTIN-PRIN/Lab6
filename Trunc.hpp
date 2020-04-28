#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include <iostream>
#include <string>

#include "Stringify_Decorator.hpp"

using namespace std;

class Trunc : public StringifyDecorator
{
	private:
		Base* child;

	public:
		/* Constructors */
		Trunc() {};
		Trunc(Base* child_) { this->child = child_; };
		string stringify() { return to_string(this->child->evaluate()); };
};

#endif
