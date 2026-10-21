/* NON_MATCHING: entry uses ADD/STR rather than post-index STR/MOV; virtual child destruction loads its vtable through R0 instead of R1. Remaining default code, including the hint NOP, matches. */
#include "shard/W6_W6Match1_Obj55a5a8.h"

extern "C" void asdOperatorDeleteArray(void* array);

inline Obj55a5a8RawArray::~Obj55a5a8RawArray()
{
    asdOperatorDeleteArray(begin);
}

inline Obj55a5a8ElementArray::~Obj55a5a8ElementArray()
{
    Obj55a5a8Element* last = end;
    for (Obj55a5a8Element* element = begin; element != last; ++element) {
        element->~Obj55a5a8Element();
    }
    asdOperatorDeleteArray(begin);
}

Obj55a5a8::~Obj55a5a8()
{
    // Owned arrays release their elements and storage in reverse declaration order.
}
