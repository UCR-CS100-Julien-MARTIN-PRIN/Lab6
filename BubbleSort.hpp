#include <iostream>
#include <string>
#include <vector>

#include "base.hpp"
#include "sort.hpp"
#include "VectorContainer.hpp"

class BubbleSort : public Sort
{
	public:
		/* Constructors */
		BubbleSort(){}; //null constructor
		
		void sort(Container* container)
		{
			int flag = 1;
			Base* temp;
			int length = container.size();
			
			for (int i = 1; (i <= length) && flag; i++)
			{
				flag = 0;
				
				for (int j = 0; j < (length - 1); j++)
				{
					if (cont[j + 1]->evaluate() > cont[i]->evaluate())
					{
						temp = cont[j];
						cont[j] = cont[j + 1];
						cont[j + 1] = temp;
						flag = 1;
					}
				}
			}
		};
};
