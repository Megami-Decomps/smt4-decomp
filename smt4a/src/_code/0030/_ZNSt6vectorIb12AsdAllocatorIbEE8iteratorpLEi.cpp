/* std::vector<bool>::iterator::operator+=(int): moves the iterator by `count` bits. */
#include "stl/VectorBool.h"

extern "C" BitIterator *_ZNSt6vectorIb12AsdAllocatorIbEE8iteratorpLEi(BitIterator *iterator, s32 count)
{
    s32 position = count + iterator->bit;

    iterator->word += position / 32;
    position = position % 32;
    if (position < 0) {
        iterator->bit = position + 32;
        iterator->word--;
    } else {
        iterator->bit = position;
    }
    return iterator;
}
