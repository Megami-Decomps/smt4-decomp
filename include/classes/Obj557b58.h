#ifndef CLASSES_OBJ557B58_H
#define CLASSES_OBJ557B58_H

#include "common.h"

extern "C" void *FUN_00178b04(u32 size, const char *file, s32 line);
extern "C" void _ZN4__rw15__rw_deallocateEPvji(void *block, s32 count, s32 flags);

/* An object the owner deletes through its virtual destructor. */
class Obj557b58Item {
public:
    virtual ~Obj557b58Item();
};

/* A growable array of item pointers: the first and one-past-last used pointer and the end of the
 * allocation. Destroying it empties it and releases the block. */
struct Obj557b58Vec {
    /* 0x00 */ Obj557b58Item **begin;
    /* 0x04 */ Obj557b58Item **end;
    /* 0x08 */ Obj557b58Item **capacity;

    ~Obj557b58Vec()
    {
        Obj557b58Item **first = begin;
        if (first != end) {
            end = end - (end - first);
        }
        _ZN4__rw15__rw_deallocateEPvji(first, capacity - first, 0);
    }
};

/* The object whose vtable is at 0x557b58 (named after it until its real name is known): it owns an
 * array of objects and deletes them all when it is destroyed. Slot 0 is the destructor. */
class Obj557b58 {
public:
    explicit Obj557b58(u32 resource);
    virtual ~Obj557b58();

    /* The engine's allocator with source location (file, line). */
    static void *operator new(u32 size, const char *file, s32 line) throw() { return FUN_00178b04(size, file, line); }

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ Obj557b58Vec items;
    /* 0x10 */ u8 unk10[0x0C];
};

#endif
