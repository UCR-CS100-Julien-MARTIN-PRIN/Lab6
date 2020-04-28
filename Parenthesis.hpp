#ifndef __PARENTHESIS_HPP__
#define __PARENTHESIS_HPP__

#include <iostream>
#include <string>

#include "Stringify_Decorator.hpp"

using namespace std;

class Parenthesis : public StringifyDecorator
{
	private:
		Base* child;

	public:
		/* Constructors */
		Parenthesis() {};
		Parenthesis(Base* child_) { this->child = child_; };

		string stringify() { return ("(" + child->stringify() + ")"); };
};

#endif
