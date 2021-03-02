#include "Fixed.hpp"

int	main( void ) {
	Fixed	a;
	Fixed	b(a);	//복사생성자 사용
	Fixed	c;

	c = b;			//대입연산자 오버로딩 사용

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}