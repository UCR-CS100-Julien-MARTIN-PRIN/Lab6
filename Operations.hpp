#ifndef __OPERATORS_HPP__
#define __OPERATORS_HPP__

#include <iostream>
#include <string>
#include <cstdlib>
#include <bits/stdc++.h>

#include "base.hpp"

using namespace std;

class Op : public Base
{
	private:
		double value;

	public:
		Op(double value_)
		{
			this->value=value_;
		};

		virtual double evaluate() { return this->value;};
		virtual string stringify() { return (to_string(this->value));};
};



class Rand : public Base
{
	private:
		double value;

	public:
		Rand ()
		{
			this->value = rand()%100;
		};

		virtual double evaluate() { return this->value; };
		virtual string stringify() { return (to_string(this->value)); };
};



class Mult : public Base
{
	private:
		Base* a;
		Base* b;
	
	public:
		Mult(Base* a_, Base* b_)
		{
			this->a = a_;
			this->b = b_;	
		};

		virtual double evaluate() { return (this->a->evaluate() * this->b->evaluate()); };
		virtual string stringify() { return (to_string(this->a->evaluate()) + " * " + to_string(this->b->evaluate())); };
};



class Div : public Base
{
	private:
		Base* a;
		Base* b;

	public:
		/* Constructors */
		Div(Base* a_, Base* b_)
		{
			this->a = a_;
			this->b = b_;
		};

		virtual double evaluate() { return (this->a->evaluate() / this->b->evaluate()); };
		virtual string stringify() { return (to_string(this->a->evaluate()) + " / " + to_string(this->b->evaluate())); };
};

class Add : public Base
{
	private:
		Base* a;
		Base* b;

	public:
		/* Constructors */
		Add(Base* a_, Base* b_)
		{
			this->a = a_;
			this->b = b_;
		};
		
		virtual double evaluate() { return (this->a->evaluate() + this->b->evaluate()); };
		virtual string stringify() { return (to_string(this->a->evaluate()) + " + " + to_string(this->b->evaluate())); };
};



class Sub : public Base
{
	private:
		Base* a;
		Base* b;

	public:
		/* Constructors */
		Sub(Base* a_, Base* b_)
		{
			this->a = a_;	
			this->b = b_;
		};

		virtual double evaluate() { return (this->a->evaluate() - this->b->evaluate()); };
		virtual string stringify() { return (to_string(this->a->evaluate()) + " - " + to_string(this->b->evaluate())); };
};



class Pow : public Base
{
	private:
		Base* a;
		Base* p;

	public:
		/* Constructors */
		Pow(Base* a_, Base* power)
		{
			this->a = a_;
			this->p= power;
		};

		virtual double evaluate() 
		{
			double x = this->a->evaluate();
			double y = this->p->evaluate();
			double temp = this->a->evaluate();			

			for(int i = 0; i < y; i++)
			{
				x = x * temp;
			};
			
			return x;
		};
	
		virtual string stringify() { return (to_string(this->a->evaluate()) + " ** " + to_string(this->p->evaluate()));};
};

#endif
