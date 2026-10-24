#include "common.h"

struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 base[0x30];
    /* 0x34 */ u32 count;
    /* 0x38 */ u8 tableA[120];
    /* 0xB0 */ u8 tableB[120];
    /* 0x128 */ u32 tail;
};

extern "C" {
void *_ZN9Obj5590d0C1Ej(void *object, u32 size);
void sysMemClear(void *block, s32 size);
}

/* Constructs the Obj5590d0 at +4 (size 0x800000), clears the two tables and the counters; returns the holder. */
extern "C" Holder *FUN_0030e77c(Holder *holder)
{
    Holder *owner = reinterpret_cast<Holder *>(static_cast<u8 *>(_ZN9Obj5590d0C1Ej(holder->base, 0x800000)) - 4);

    sysMemClear(owner->tableA, 120);
    sysMemClear(owner->tableB, 120);
    owner->count = 0;
    owner->tail = 0;
    return owner;
}
