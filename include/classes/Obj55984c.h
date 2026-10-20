#ifndef CLASSES_OBJ55984C_H
#define CLASSES_OBJ55984C_H

#include "common.h"

extern "C" void asdOperatorDeleteArray(void *block);

/* An object the owner deletes through its virtual destructor. */
class Obj55984cChild {
public:
    virtual ~Obj55984cChild();
};

/* One array element: a pointer with nothing to destroy. */
struct Obj55984cEntry {
    Obj55984cChild *child;
    ~Obj55984cEntry() {}
};

/* A growable array of entries; destroying it runs each entry's destructor and frees the block. */
struct Obj55984cArray {
    /* 0x00 */ Obj55984cEntry *begin;
    /* 0x04 */ Obj55984cEntry *end;
    /* 0x08 */ Obj55984cEntry *capacity;

    u32 size() const
    {
        return end - begin;
    }

    ~Obj55984cArray()
    {
        for (Obj55984cEntry *entry = begin; entry != end; ++entry) {
            entry->~Obj55984cEntry();
        }
        asdOperatorDeleteArray(begin);
    }
};

/* The object whose vtable is at 0x55984c (named after it until its real name is known): it owns an
 * array of child objects and one more, and deletes them all when it is destroyed. Slot 0 is the
 * destructor; the vtable is stored by FUN_001158c4 and the destructor. */
class Obj55984c {
public:
    Obj55984c();
    virtual ~Obj55984c();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ Obj55984cArray children;
    /* 0x10 */ Obj55984cChild *extra;
};

#endif
