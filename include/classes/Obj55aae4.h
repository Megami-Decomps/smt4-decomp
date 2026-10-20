#ifndef CLASSES_OBJ55AAE4_H
#define CLASSES_OBJ55AAE4_H

#include "common.h"

extern "C" void asdOperatorDeleteArray(void *block);

/* An eight-byte polymorphic element, destroyed through its virtual destructor. */
class Obj55aae4Element {
public:
    virtual ~Obj55aae4Element();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
};

/* A growable array of elements: first, one-past-last and end of the allocation. Destroying it
 * destroys each element and frees the block. */
struct Obj55aae4Array {
    /* 0x00 */ Obj55aae4Element *begin;
    /* 0x04 */ Obj55aae4Element *end;
    /* 0x08 */ Obj55aae4Element *capacity;

    static void destroyRange(Obj55aae4Element *first, Obj55aae4Element *last)
    {
        for (; first != last; ++first) {
            first->~Obj55aae4Element();
        }
    }

    ~Obj55aae4Array()
    {
        destroyRange(begin, end);
        asdOperatorDeleteArray(begin);
    }
};

/* The object whose vtable is at 0x55aae4 (named after it until its real name is known): it
 * owns an array of elements at +0x30. Slot 0 is the destructor; the vtable is stored by
 * FUN_0030c9cc, _ZN9Obj55a328D1Ev and the destructor. */
class Obj55aae4 {
public:
    Obj55aae4();
    virtual ~Obj55aae4();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x2C];
    /* 0x30 */ Obj55aae4Array elements;
};

#endif
