//g++ hello.cc -o hello

//#include <test.hpp>

#include <iostream>

#if 0
int
main()
{
  std::cout << "Hello World!" << std::endl;

  return 0;
} //main()
#endif

void
lib_active(void)
{
	std::cout  << "Shared Library is Active!!!" << std::endl;

	return;
} //lib_active()
