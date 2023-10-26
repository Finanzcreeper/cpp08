#include "Span.hpp"
#include <exception>
#include <iostream>

Span::Span() : N(0)
{}

Span::Span(unsigned int init) : N(init)
{}

Span::Span(Span &src) : N(src.N)
{}

Span::~Span()
{}

Span &Span::operator=(const Span &src) {
	this->N = src.N;
	return *this;
}

void Span::addNumber(int input) {
	if (this->cont.size() < this->N) {
		this->cont.insert(input);
	}
	else
		throw spanFullException();
}

int Span::shortestSpan() {
	int diff;
	int smol;
	std::multiset<int>::iterator one = this->cont.begin();
	if ( one == this->cont.end())
		throw (noSpanPossible());
	std::multiset<int>::iterator two = ++this->cont.begin();
	if (two == this->cont.end())
		throw (noSpanPossible());

	smol = *two++ - *one++;
	if (two == this->cont.end())
		return (smol);
	for (unsigned int i = 0; i < this->N; ++i) {
		diff = *two++ - *one++;
		if (diff < smol)
			smol = diff;
		if (two == this->cont.end())
			return (smol);
	}
	throw (noSpanPossible());
}

int Span::longestSpan() {
	return (*--this->cont.end() - *this->cont.begin());
}

const char *Span::spanFullException::what() const throw() {
	return ("Span is Full");
}

const char *Span::noSpanPossible::what() const throw() {
	return ("No Span Possible");
}
