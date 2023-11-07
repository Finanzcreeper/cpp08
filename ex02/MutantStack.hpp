#ifndef CPP08_MUTANTSTACK_HPP
#define CPP08_MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template<class Q>
class Mutantclass : public std::stack<Q>{
public:
	typedef typename std::stack<Q>::container_type::iterator iterator;
	iterator begin() {
		return (std::stack<Q>::c.begin());
	}
	iterator end() {
		return (std::stack<Q>::c.end());
	}
};

#endif //CPP08_MUTANTSTACK_HPP
