#ifndef CLASSES_OBJ55984C_H
#define CLASSES_OBJ55984C_H

#include "common.h"

extern "C" void asdOperatorDeleteArray(void *block);

/* An object the owner deletes through its virtual destructor. */
class Obj55984cChild {
public:
    virtual ~Obj55984cChild();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    virtual s32 handle(const void *buffer, u32 argument, u32 size); /* +0x1C */
    virtual void notify(const void *buffer, u32 argument);         /* +0x20 */
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
    Obj55984cChild *childAt(u32 index) const { return children.begin[index].child; }
    Obj55984cChild *extraChild() const { return extra; }

    /* Routing information embedded in an incoming online packet. */
    struct Packet {
        /* 0x00 */ u8 unk00[0x24];
        /* 0x24 */ u8 childIndex;
        /* 0x25 */ u8 kind;
    };

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ Obj55984cArray children;
    /* 0x10 */ Obj55984cChild *extra;
};

#endif
