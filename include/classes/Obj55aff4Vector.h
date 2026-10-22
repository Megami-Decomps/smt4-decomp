#ifndef CLASSES_OBJ55AFF4_VECTOR_H
#define CLASSES_OBJ55AFF4_VECTOR_H

#include "shard/W4_Match4_Obj559ecc.h"

extern "C" void asdOperatorDeleteArray(void *allocation);

/* Contiguous polymorphic string values; end and capacityEnd are one-past pointers. */
struct Obj55aff4Vector {
    Obj55aff4Vector() : begin(NULL), end(NULL), capacityEnd(NULL) {}
    Obj55aff4Vector(u32 count);
    Obj55aff4Vector &operator=(const Obj55aff4Vector &other);
    ~Obj55aff4Vector()
    {
        Obj55aff4 *last = end;
        for (Obj55aff4 *entry = begin; entry != last; ++entry) {
            entry->~Obj55aff4();
        }
        asdOperatorDeleteArray(begin);
    }
    /* 0x00 */ Obj55aff4 *begin;
    /* 0x04 */ Obj55aff4 *end;
    /* 0x08 */ Obj55aff4 *capacityEnd;
};

#endif
