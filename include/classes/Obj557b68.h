#ifndef CLASSES_OBJ557B68_H
#define CLASSES_OBJ557B68_H

#include "common.h"

struct Obj557b68Entry {
    u32 values[2]; // 0x00
};

extern "C" void asdDeallocateArrayStorage(void* entries, s32 count, s32 allocator);
extern "C" void asdOperatorDelete(void* block);

struct Obj557b68EntryVector {
    Obj557b68Entry* begin;    // 0x00
    Obj557b68Entry* end;      // 0x04
    Obj557b68Entry* capacity; // 0x08

    ~Obj557b68EntryVector()
    {
        asdDeallocateArrayStorage(begin, capacity - begin, 0);
    }
};

struct Obj557b68WordVector {
    u32* begin;    // 0x00
    u32* end;      // 0x04
    u32* capacity; // 0x08
};

// An owner of one entry vector and eight word vectors (vtable at 0x557b68).
class Obj557b68 {
public:
    virtual ~Obj557b68();
    static void operator delete(void* block) { asdOperatorDelete(block); }

    u8 unk004[0x104];                 // 0x004
    Obj557b68EntryVector entries;     // 0x108
    Obj557b68WordVector records[8];   // 0x114
};

#endif
