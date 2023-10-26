#include "easyfind.hpp"
#include <exception>
#include <iostream>

const char *notFoundException::what() const throw() {
	return ("Value not found");
}