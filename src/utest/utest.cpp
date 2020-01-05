
#include <utest.hpp>
#include <test.hpp>

typedef struct bar {
    int       a;
    int       b;
    long long c;
} bar_t;

typedef enum why {
    zero,
    one,
    two,
    three,
    four
} why_t;

void
test_init(void)
{
    bar_t b = {1};
    why_t w = {};
    //why_t w = {two};

	std::cout << "Here!" << std::endl;
	std::cout << w << std::endl;
    return;
} //test_init()

int
main(void)
{
	int rc = 0;

	lib_active();
	std::cout << "Hello World!" << std::endl;

    test_init();

	return rc;
}//main()

