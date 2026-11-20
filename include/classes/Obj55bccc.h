#ifndef CLASSES_OBJ55BCCC_H
#define CLASSES_OBJ55BCCC_H

#include "common.h"
#include "shard/LateStartResourceOwners.h"

/* A 30-bit value and a 2-bit tag packed in one word. */
struct Obj55bcccPacked {
    u32 value : 30;
    u32 tag : 2;
};

/* One of the record's five growable arrays (nw::ut::MoveArray layout: the capacity shares its word
 * with a 2-bit ownership tag). It starts empty; its destructor empties it and gives the storage back
 * to the allocator. */
struct Obj55bcccArray {
    Obj55bcccArray() : allocator(NULL), begin(NULL), end(NULL)
    {
        capacity.value = 0;
        capacity.tag = 0;
    }
    ~Obj55bcccArray()
    {
        end = begin;
        if (allocator != NULL && begin != NULL)
            allocator->vtable->release(allocator, begin);
    }

    /* 0x00 */ ResourceBufferAllocator *allocator;
    /* 0x04 */ void *begin;
    /* 0x08 */ void *end;
    /* 0x0C */ Obj55bcccPacked capacity;
};

/* A record of five arrays (vtable at 0x55bccc; named after it until its real name is known). */
class Obj55bccc {
public:
    Obj55bccc(u32 second, u32 third, u32 first);
    virtual ~Obj55bccc();

    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
    /* 0x0C */ Obj55bcccArray array0C;
    /* 0x1C */ u32 third;
    /* 0x20 */ Obj55bcccArray array20;
    /* 0x30 */ Obj55bcccArray array30;
    /* 0x40 */ Obj55bcccArray array40;
    /* 0x50 */ Obj55bcccArray array50;
    /* 0x60 */ u32 unk60;
    /* 0x64 */ u8 unk64;
};

typedef char Obj55bcccSizeCheck[sizeof(Obj55bcccArray) == 0x10 && sizeof(Obj55bccc) == 0x68 ? 1 : -1];

#endif
