

#include <iostream>
#include "../../utils/type_name.hpp"

int main()
{
	
	int n = 25;
	int & reff = n;
	int const & const_ref = n;

	auto &&x = n;
	auto &&y = reff;
	auto && z = std::forward<decltype(const_ref)>(const_ref);

	std::cout << type_name<decltype(x)>() << "\n";
	std::cout << type_name<decltype(y)>() << "\n";
	std::cout << type_name<decltype(z)>() << "\n";
}
