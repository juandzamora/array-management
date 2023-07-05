#include "src/array.h"

int main()
{
    array example1(); //Default 1
    array example2( 10 ); //Size 10
    array * example3 = new array( 15 ); //In Heap memory: size of 15

    delete example3;

    return 0;
}