/* std::vector<bool>::iterator::operator*() const: the reference to the selected bit (its word and mask). */
#include "stl/VectorBool.h"

extern "C" BitReference _ZNKSt6vectorIb12AsdAllocatorIbEE8iteratordeEv(const BitIterator *iterator)
{
    return BitReference(iterator->word, 1U << iterator->bit);
}
