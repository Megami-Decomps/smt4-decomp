/* std::vector<bool>::iterator::operator++(int): returns the old position and steps forward one bit. */
#include "stl/VectorBool.h"

extern "C" void _ZNSt6vectorIb12AsdAllocatorIbEE8iteratorppEi(BitIterator *result, BitIterator *iterator)
{
    BitIterator previous = *iterator;

    if (iterator->bit++ == 31) {
        iterator->bit = 0;
        iterator->word++;
    }
    *result = previous;
}
