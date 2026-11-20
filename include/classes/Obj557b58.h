#ifndef CLASSES_OBJ557B58_H
#define CLASSES_OBJ557B58_H

#include "common.h"
#include <vector>

extern "C" void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);

/* An object the owner deletes through its virtual destructor. */
class Obj557b58Item {
public:
    virtual ~Obj557b58Item();
};

/* The object whose vtable is at 0x557b58 (named after it until its real name is known): it owns an
 * array of objects and deletes them all when it is destroyed. Slot 0 is the destructor. */
class Obj557b58 {
public:
    explicit Obj557b58(u32 resource);
    virtual ~Obj557b58();

    /* The engine's allocator with source location (file, line). */
    static void *operator new(u32 size, const char *file, s32 line) throw() { return asdMemoryAllocTraced(size, file, line); }

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ std::vector<Obj557b58Item *> items;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
};

#endif
