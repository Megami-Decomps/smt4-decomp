#include "common.h"

extern "C" u8* sysCopyByteRange(const u8* first, const u8* last, u8* destination)
{
    while (first != last) {
        *destination++ = *first++;
    }
    return destination;
}
