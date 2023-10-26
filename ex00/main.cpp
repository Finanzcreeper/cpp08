#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main() {
	std::vector<int> vec;
	int f;

	for (int i = 0; i < 12; ++i) {
		vec.push_back(i);
	}
	for (int i = 0; i < 13; ++i) {
		try {
			f = easyfind(vec,i);
			std::cout << f << " found" << std::endl;
		}
		catch (notFoundException& e){
			std::cout << e.what() << std::endl;
		}
	}

}