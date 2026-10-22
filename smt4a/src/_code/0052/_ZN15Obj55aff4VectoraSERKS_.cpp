/* NON_MATCHING: complete string-vector assignment; iterator/frame allocation and some loop branches still differ. */
#include "classes/Obj55aff4Vector.h"

inline void *operator new(u32, void *storage) { return storage; }
extern "C" void *rt_malloc(u32 bytes);

/* Reuses initialized values and available storage whenever possible. */
Obj55aff4Vector &Obj55aff4Vector::operator=(const Obj55aff4Vector &source)
{
    if (this == &source) {
        return *this;
    }
    u32 count = source.end - source.begin;
    if (count > static_cast<u32>(capacityEnd - begin)) {
        Obj55aff4 *storage = count != 0
            ? static_cast<Obj55aff4 *>(rt_malloc(count * sizeof(Obj55aff4))) : NULL;
        Obj55aff4 *output = storage;
        Obj55aff4 *last = source.end;
        for (Obj55aff4 *input = source.begin; input != last; ++input, ++output) {
            if (output != NULL) {
                new (output) Obj55aff4(*input);
            }
        }
        last = end;
        for (Obj55aff4 *entry = begin; entry != last; ++entry) {
            entry->~Obj55aff4();
        }
        asdOperatorDeleteArray(begin);
        begin = storage;
        end = storage + count;
        capacityEnd = end;
    } else if (static_cast<u32>(end - begin) >= count) {
        Obj55aff4 *last = source.end;
        Obj55aff4 *input = source.begin;
        Obj55aff4 *output = begin;
        for (; input != last; ++input, ++output) {
            *output = *input;
        }
        last = end;
        for (Obj55aff4 *entry = output; entry != last; ++entry) {
            entry->~Obj55aff4();
        }
        end = begin + count;
    } else {
        Obj55aff4 *middle = source.begin + (end - begin);
        Obj55aff4 *input = source.begin;
        Obj55aff4 *output = begin;
        for (; input != middle; ++input, ++output) {
            *output = *input;
        }
        output = end;
        Obj55aff4 *last = source.end;
        for (input = middle; input != last; ++input, ++output) {
            if (output != NULL) {
                new (output) Obj55aff4(*input);
            }
        }
        end = begin + count;
    }
    return *this;
}
