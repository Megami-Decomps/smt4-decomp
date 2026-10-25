/* NON_MATCHING: scheduling/register allocation only: retail orders the two flag-byte updates differently (`orr` before the second `bic`), tests itemDataGetValue's result before copying it to r4, and hoists the constant 1 into r6; built differs in those three places and addresses the bitmap byte with `ldrb r0, [r5, r4, lsr #3]`. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "util/CalleeContracts.h"

extern "C" {

typedef struct FlagEntry {
    /* 0x0 */ u8 seen : 1;
    /* 0x0 */ u8 unk0Mid : 4;
    /* 0x0 */ u8 active : 1;
    /* 0x0 */ u8 unk0High : 2;
    /* 0x1 */ u8 unk1;
    /* 0x2 */ u8 unk2Low : 1;
    /* 0x2 */ u8 unk2Mid : 4;
    /* 0x2 */ u8 unk2Top : 1;
    /* 0x2 */ u8 unk2High : 2;
    /* 0x3 */ u8 unk3;
} FlagEntry;

typedef struct FlagBlock {
    /* 0x000 */ u8 bitmap[0x2A0];
    /* 0x2A0 */ FlagEntry entries[1];
} FlagBlock;

s32 itemDataIsFlagClear(s32 id);
u32 itemDataGetValue(s32 id);
s32 FUN_00417e08(s32 id);
s32 FUN_004bb6d8(u32 id, s32 arg);

/* Marks entry `id` as seen and active, runs FUN_00417e08 for ids that qualify, and sets the linked id's bit in the bitmap. */
void FUN_00417b70(s32 id)
{
    FlagEntry *entry = &reinterpret_cast<FlagBlock *>(gameFlagBlockGet())->entries[id];
    s32 kind;
    u32 linked;

    entry->unk1 = 0;
    entry->seen = 1;
    entry->active = 1;
    entry->unk0High = 0;
    entry->unk2Low = 0;
    entry->unk2Top = 0;
    kind = FUN_001bd118(id);
    if (kind != 6 && kind != 9 && kind != 0xB && kind != 0xC && itemDataIsFlagClear(id) != 0) {
        FUN_00417e08(id);
    }
    linked = itemDataGetValue(id);
    if (linked != 0) {
        FlagBlock *block = reinterpret_cast<FlagBlock *>(gameFlagBlockGet());

        FUN_004bb6d8(linked, 1);
        block->bitmap[linked >> 3] |= 1 << (linked & 7);
    }
}

} /* extern "C" */
