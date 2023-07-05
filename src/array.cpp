#include "array.h"

array::array( int size )
{
    this->size = new int ( size );

    arreglo = new int[ size ];

    for ( int i = 0; i < size; i++ )
        arreglo[ i ] = 0;
}

array::~array()
{
    delete size;
    delete [] arreglo;
}