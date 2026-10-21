/* NON_MATCHING: count and entries share one captured base instead of retail's separate bases and larger saved-register set. */
#include "common.h"

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
void FUN_002f5eac(u32, u32);

// Clear each listed flag and activate state twelve.
void FUN_003ab948(FlagListOwner *owner)
{
    ListedFlags *list = &owner->list;
    for (s32 index = 0; index < list->count; ++index)
        FUN_002f5eac(list->entries[index].flag, 0);
    owner->active = 1;
    owner->state = 0xc;
    owner->timer = 0;
}
}
