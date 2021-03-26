#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
// # include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack<T> const &other);
		virtual ~MutantStack();
		MutantStack<T>	&operator=(MutantStack<T> const &other);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};
#endif