#ifndef CPP08_EASYFIND_HPP
#define CPP08_EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <exception>

class notFoundException : public std::exception
{
public:
	const char * what() const throw();
};

template<typename T>
int easyfind(T &cont, int searched) {
	typename T::iterator it;
	it = std::find(cont.begin(),cont.end(),searched);
	if (it == cont.end()) {
		throw (notFoundException());
	}
	return (*it);
}


#endif //CPP08_EASYFIND_HPP
