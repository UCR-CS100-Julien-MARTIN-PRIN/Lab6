#include <iostream>
#include <string>
#include <vector>

#include "base.hpp"
#include "sort.hpp"
#include "Operations.hpp"

class SelectionSort : public Sort
{
	public:
		/* Constructors */
		SelectionSort(){}; //null constructor
		
		void sort(Container* container)
		{
			int first;
			Base* temp;
			int length = container.size();

			for (int i = length; i > 0; i--)
			{
				first = 0;

				for (int j = 1; j <= i; j++)
				{
					if (cont[j]->evaluate() < cont[first]->evaluate())
					{
						first = j;
					}
				}

				temp = cont[first];
				cont[first] = cont[i];
				cont[i] = temp;
			}
		};
};
