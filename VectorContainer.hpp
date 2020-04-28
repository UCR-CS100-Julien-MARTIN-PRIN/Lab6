#include <iostream>
#include <string>
#include <vector>

#include "Operations.hpp"
#include "sort.hpp"


class VectorContainer : public Container
{
	private:
		vector<Base*> cont;
		Sort* func;		

	public:
		/* Constructor */
		VectorContainer(){}; //null container
		VectorContainer(Sort* function)
		{
			this->func = function;	
		};
		
		void add_element(Base* ele)
		{
			cont.push_back(ele);
		};

		void print()
		{
			for(int i = 0; i < cont.size(); i++)
			{
				cout << cont[i]->stringify() << endl;
			}
		};

		void sort()
		{
			if (func != NULL)
			{
				func->sort(this);
			}
		};

		void swap(int i, int j)
		{
			if(i >= 0 && i < cont.size() && j >= 0 && j < cont.size())
			{
				Base* temp = cont[i];
				cont[i] = cont[j];
				cont[j] = temp;
			}
			else
			{
				cout << "Indexes must be greater than 0 and/or lesser than the container size" << endl;
			}
		};

		Base* at(int i) {return cont[i];};

		int size() {return cont.size();};
};
