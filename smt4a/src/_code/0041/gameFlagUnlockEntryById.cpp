/* NON_MATCHING: the linked-id update goes through the siblings' gameFlagWrite inline (retail's hoisted constant 1 in r6); remaining: retail stores flag byte 0 before byte 2 and allocates the bit and the constant 1 to r1/r3 (built r3/r2). */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "code/Code001b.h"
#include "code/Code003d_Smt4a.h"

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
s32 rosterAddUnit(s32 id);
s32 encounterRefreshOnFlagChange(u32 id, s32 arg);

/* Reports a game flag change to encounterRefreshOnFlagChange, then sets or clears the flag's bit (the sibling
 * FUN_00417a60, FUN_00417c24 and FUN_00418070 write flags through the same inline). */
static __inline void gameFlagWrite(u32 flag, s32 value)
{
    FlagBlock *block = reinterpret_cast<FlagBlock *>(gameFlagBlockGet());

    encounterRefreshOnFlagChange(flag, value);
    u32 index = flag >> 3;
    if (value) {
        block->bitmap[index] |= 1 << (flag & 7);
    } else {
        s32 keep = ~(1 << (flag & 7));
        block->bitmap[index] &= keep;
    }
}

/* Marks entry `id` as seen and active, runs rosterAddUnit for ids that qualify, and sets the linked id's bit in the bitmap. */
void gameFlagUnlockEntryById(s32 id)
{
    FlagEntry *entry = &reinterpret_cast<FlagBlock *>(gameFlagBlockGet())->entries[id];
    s32 kind;


    entry->unk1 = 0;
    entry->seen = 1;
    entry->active = 1;
    entry->unk0High = 0;
    entry->unk2Low = 0;
    entry->unk2Top = 0;
    kind = table1bOr1cGetRecordValue(id);
    if (kind != 6 && kind != 9 && kind != 0xB && kind != 0xC && itemDataIsFlagClear(id) != 0) {
        rosterAddUnit(id);
    }
    u32 linked = itemDataGetValue(id);
    if (linked != 0) {
        gameFlagWrite(linked, 1);
    }
}

} /* extern "C" */
