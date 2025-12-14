
#include <stdio.h>
#include "books.c"


void test_book_invalid()
{
    int actual = isValidBookId(-5);
    int expected = 0;

    printf("expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);
}


void test_book_valid()
{
    int actual = isValidBookId(101);
    int expected = 1;

    printf("expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);
}

int main()
{
    test_book_invalid();
    test_book_valid();
    return 0;
}
