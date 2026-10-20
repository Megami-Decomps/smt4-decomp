#include "common.h"

extern "C" {

typedef struct Item {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ u32 handle;
} Item;

typedef struct Owner {
    /* 0x0000 */ u8 unk0000[0x15DC];
    /* 0x15DC */ Item *items[0x18];
} Owner;

void FUN_001c7948(u32 handle);

/* Passes the handle of each of the 0x18 items to FUN_001c7948. */
void FUN_00189de4(Owner *owner)
{
    s32 i;

    i = 0;
    do {
        FUN_001c7948(owner->items[i]->handle);
        i = i + 1;
    } while (i < 0x18);
}

} /* extern "C" */
