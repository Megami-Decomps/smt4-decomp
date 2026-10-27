#include "common.h"

inline void *operator new(u32, void *storage) { return storage; }

struct IdArray {
    u16 *values;
    u32 count;
};

/* Binds the array and constructs every ID as the invalid sentinel. */
extern "C" void idArrayConstruct(IdArray *array, u16 *values, u32 count)
{
    array->values = values;
    array->count = count;
    if (count != 0) {
        u32 i = 0;
        for (u32 remaining = count; remaining != 0; --remaining)
            new (&array->values[i++]) u16(0xFFFF);
    }
}
