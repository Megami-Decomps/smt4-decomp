/* NON_MATCHING: vector fill-construction iterator and temporary-string register allocation remain unmatched. */
#include "classes/Obj55aff4Vector.h"

inline void *operator new(u32, void *storage) { return storage; }
extern "C" void *rt_malloc(u32 bytes);

/* Reserves at least 32 values, filling the requested initial range with empty strings. */
Obj55aff4Vector::Obj55aff4Vector(u32 count)
{
    Obj55aff4 empty;
    u32 capacity = count < 32 ? 32 : count;
    begin = NULL;
    end = NULL;
    capacityEnd = NULL;
    begin = static_cast<Obj55aff4 *>(rt_malloc(capacity * sizeof(Obj55aff4)));
    Obj55aff4 *output = begin;
    for (u32 remaining = count; remaining != 0; --remaining, ++output) {
        if (output != NULL) {
            new (output) Obj55aff4(empty);
        }
    }
    capacityEnd = begin + capacity;
    end = begin + count;
}
