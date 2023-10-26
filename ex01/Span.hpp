#ifndef CPP08_SPAN_HPP
#define CPP08_SPAN_HPP

#include <set>
#include <exception>

class Span
{
private:
	unsigned int N;
	std::multiset<int> cont;
public:
	Span();
	Span(unsigned int init);
	Span(Span& src);
	~Span();

	void addNumber(int input);
	int shortestSpan();
	int longestSpan();

	class spanFullException : public std::exception
	{
	public:
		const char * what() const throw();
	};
	class noSpanPossible : public std::exception
	{
	public:
		const char * what() const throw();
	};

	Span& operator=(Span const &src);
};

#endif //CPP08_SPAN_HPP
