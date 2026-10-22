#include "classes/ByteIterator.h"

/* Returns the byte position at the requested offset. */
ByteIterator ByteIterator::operator+(u32 offset) const
{
    return ByteIterator(pointer + offset);
}
