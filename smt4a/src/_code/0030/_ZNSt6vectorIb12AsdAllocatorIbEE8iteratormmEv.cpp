/* std::vector<bool>::iterator::operator--(): steps back one bit. */
#include "stl/VectorBool.h"

extern "C" BitIterator *_ZNSt6vectorIb12AsdAllocatorIbEE8iteratormmEv(BitIterator *iterator)
{
    if (iterator->bit-- == 0) {
        iterator->bit = 31;
        iterator->word--;
    }
    return iterator;
}
