#include "classes/ZeroWordPair.h"

/* Copies both words and returns the original destination. */
ZeroWordPair &ZeroWordPair::operator=(const ZeroWordPair &other)
{
    u32 value = other.first;
    second = other.second;
    first = value;
    return *this;
}
