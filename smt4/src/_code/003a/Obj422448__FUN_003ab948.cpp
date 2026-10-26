/* NON_MATCHING: code and addressing now match retail; only the r5/r6 assignment of the count base and the list pointer is swapped. */
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

void Obj422448::FUN_003ab948()
{
    FlagListOwner * owner = reinterpret_cast<FlagListOwner *>(this);
    s32 index;
    for (index = 0; index < owner->list.count; ++index) {
        ListedFlags *list = &owner->list;
        stateSetBitFlag(list->entries[index].flag, 0);
    }
    owner->active = 1;
    owner->state = 0xc;
    owner->timer = 0;
}
