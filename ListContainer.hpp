#include "container.hpp"
#include <string>
#include <iostream>
#include <list>

#include "Operations.hpp"


class ListContainer : public Container
{
	private:
		list <Base*> cont;
		Sort* func;

	public:
		/* Constructors */
		ListContainer() {}; //nul container
		ListContainer(Sort* function)
		{
			this->func=function;
		};

		void add_element(Base* ele)
		{
			cont.push_back(ele);
		};

		void print()	
		{
			list<Base*>::iterator it=cont.begin();
			for (int i = 0; i < cont.size(); i++)
			{
				cout << this->at(i)->stringify() << endl;
				advance(*it,i);
			}
		};

		void sort()
		{
			func->sort(this);
		};

		void swap(int i, int j)
		{
			if(i >=0 && i < cont.size() && j >= 0 && j< cont.size())
			{
				list<Base*>::iterator it1= cont.begin();
				list <Base*>::iterator it2=cont.begin();
				advance(it1,i);
				advance(it2,j);
				iter_swap(it1,it2);
			}
			else
			{
				cout << "Indexes must be greater than 0 and/or lesser than the container size" << endl;
			}
		};

		Base* at(int i) {
			list<Base*>::iterator it1=cont.begin();
			advance(it1,i);
			return *it1;
		};

		int size() {return cont.size();};
};	
