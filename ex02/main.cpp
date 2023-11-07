#include "MutantStack.hpp"
#include <iostream>

int main() {
	{
		Mutantclass<int> mustard;
		mustard.push(53);
		mustard.push(25);
		std::cout << "start: " << *mustard.begin() << std::endl;
		std::cout << "end : " << *(--mustard.end()) << std::endl;
		std::cout << "-------------------------------------" << std::endl;

		Mutantclass<int> iter;
		for (int i = 0; i < 32; ++i) {
			iter.push(i * 2);
		}
		Mutantclass<int>::iterator it = iter.begin();
		Mutantclass<int>::iterator ei = iter.end();
		while (it != ei)
		{
			std::cout << *it << std::endl;
			it++;
		}
	}
}
