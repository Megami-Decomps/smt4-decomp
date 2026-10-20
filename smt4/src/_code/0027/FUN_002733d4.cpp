#include "common.h"

extern "C" {

int FUN_00208c64(u32 value);

typedef struct Slot {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[3];
    /* 0x004 */ s32 state;
    /* 0x008 */ u8 unk008[0x1C];
    /* 0x024 */ u32 unk024;
    /* 0x028 */ u8 unk028[0x16C];
} Slot;

typedef struct Table {
    /* 0x000 */ u8 unk000[0x1D0];
    /* 0x1D0 */ Slot slots[0x80];
} Table;

typedef struct Owner {
    /* 0x0 */ Table *table;
} Owner;

void FUN_002733d4(Owner *owner)
{
    int i = 0;
    Table *table = owner->table;
    Slot *slot;

    do {
        slot = &table->slots[i];
        if ((slot->active != 0) && (slot->state == 3)) {
            FUN_00208c64(slot->unk024);
        }
        i = i + 1;
    } while (i < 0x80);
}

} /* extern "C" */
