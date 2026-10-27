#include "common.h"
#include "classes/Obj422448.h"

struct ListedFlagEntry {
    u16 flag;
    u8 unk02[0x1e];
};
struct ListedFlags {
    s16 count;
    u16 unk02;
    ListedFlagEntry entries[1];
};
struct FlagListOwner {
    u8 unk00[0x10];
    u8 active; // 0x10
    u8 unk11[3];
    s32 state; // 0x14
    u32 timer; // 0x18
    u8 unk01c[0x58c];
    ListedFlags list; // 0x5a8
};

extern "C" {
void stateSetBitFlag(u32, u32);

// Clear each listed flag and activate state twelve.
}

/* The part of the screen's state at 0x500 whose halfword at 0xA8 counts the listed flags. */
struct ListedFlagCount {
    u8 unk00[0xa8];
    s16 count;
};

void Obj422448::FUN_003ab948()
{
    FlagListOwner * owner = reinterpret_cast<FlagListOwner *>(this);
    ListedFlagCount *counts = reinterpret_cast<ListedFlagCount *>(reinterpret_cast<u8 *>(owner) + 0x500);
    s32 index;
    for (index = 0; index < counts->count; ++index) {
        ListedFlags *list = &owner->list;
        stateSetBitFlag(list->entries[index].flag, 0);
    }
    owner->active = 1;
    owner->state = 0xc;
    owner->timer = 0;
}
