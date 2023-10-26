#include "Span.hpp"
#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>

int main() {
	{
		Span a(500000);
		int c;

		srand(static_cast<unsigned int>(time(NULL)));
		try {
			while(true) {
				c = rand();
				a.addNumber(c);
			}
		}
		catch (Span::spanFullException &e){
			std::cout << e.what() << std::endl;
		}

		std::cout << "longest span is: " << a.longestSpan() << std::endl;
		std::cout << "shortest span is: " << a.shortestSpan() << std::endl;
	}
	std::cout << "------------------------------------------------------------" << std::endl;
	{
		Span b(7);
		b.addNumber(1);
		b.addNumber(14);
		b.addNumber(7);
		b.addNumber(12);
		b.addNumber(20);
		b.addNumber(9);
		b.addNumber(5);
		std::cout << "longest span is: " << b.longestSpan() << std::endl;
		std::cout << "shortest span is: " << b.shortestSpan() << std::endl;
	}
	std::cout << "------------------------------------------------------------" << std::endl;
	{
		Span c(3);
		try {
			std::cout << "1" << std::endl;
			std::cout << "shortest span is: " << c.shortestSpan() << std::endl;
			std::cout << "longest span is: " << c.longestSpan() << std::endl;
		}
		catch (Span::noSpanPossible &e){
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "2" << std::endl;
			c.addNumber(1);
			std::cout << "shortest span is: " << c.shortestSpan() << std::endl;
			std::cout << "longest span is: " << c.longestSpan() << std::endl;
		}
		catch (Span::noSpanPossible &e){
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "3" << std::endl;
			c.addNumber(1);
			std::cout << "shortest span is: " << c.shortestSpan() << std::endl;
			std::cout << "longest span is: " << c.longestSpan() << std::endl;
		}
		catch (Span::noSpanPossible &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		int zwerg = 123124;
		Span t(zwerg);
		t.addRange(0,zwerg);
		std::cout << "shortest span is: " << t.shortestSpan() << std::endl;
		std::cout << "longest span is: " << t.longestSpan() << std::endl;
	}
}