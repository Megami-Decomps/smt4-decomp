#include "common.h"
#include "gamedata/GameFlags.h"

struct FlagEntryView {
    u8 unk00;                 // 0x00
    u8 unk01[0x3B];           // 0x01
    u32 unk3C;                // 0x3C
};

struct FlagGroupView {
    u8 unk00[0x50];           // 0x00
};

struct FlagOwnerView {
    u8 unk00[0x310];          // 0x000
    s32 unk310;               // 0x310
    u8 unk314[4];             // 0x314
    FlagGroupView* unk318;    // 0x318
};

extern "C" {
s32 FUN_001b315c(FlagGroupView* group);
FlagEntryView* FUN_001b31ac(FlagGroupView* group);
u32 FUN_001b31e0(FlagGroupView* group);


// Set flags referenced by entries tagged '6' in each active group.
void gameFlagsSetFlagsFromTaggedGroupEntries(FlagOwnerView* owner)
{
    for (s32 groupIndex = 0; groupIndex < owner->unk310; ++groupIndex) {
        FlagGroupView* group = &owner->unk318[groupIndex];
        if (FUN_001b315c(group) != 0) {
            FlagEntryView* entries = FUN_001b31ac(group);
            u32 entryCount = FUN_001b31e0(group);
            for (u32 entryIndex = 0; entryIndex < entryCount; ++entryIndex) {
                FlagEntryView* entry = &entries[entryIndex];
                if (entry->unk00 == '6') {
                    gameFlagSetValue(entry->unk3C, 1, 1);
                }
            }
        }
    }
}
}
