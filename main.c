#define MYPRINTF_IMPL
#include "myprintf.h"

int main()
{
    myprintf("int {}, float {}, string {}, unsupported {}, out of bounds {}\n", 1, 2.f, "uwu", 1.2);

    myprintf("owo\n"); // No arguments works too!
};
