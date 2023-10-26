#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
	std::cout << "searching in a vector: " << std::endl;
	{
		std::vector<int> vec;
		int f;

		for (int i = 0; i < 12; ++i) {
			vec.push_back(i);
		}
		for (int i = 0; i < 13; ++i) {
			try {
				f = easyfind(vec, i);
				std::cout << f << " found" << std::endl;
			}
			catch (notFoundException &e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
	//------------------------------------------------------------------//
	std::cout << "---------------------------------------------------" << std::endl;
	//------------------------------------------------------------------//
	std::cout << "searching in a list: " << std::endl;
	{
		std::list<int> lst;

		for (int i = 0; i < 12; ++i) {
			lst.push_back(i);
		}
		for (int i = 0; i < 13; ++i) {
			try {
				std::cout << easyfind(lst, i) << " found" << std::endl;
			}
			catch (notFoundException &e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
}