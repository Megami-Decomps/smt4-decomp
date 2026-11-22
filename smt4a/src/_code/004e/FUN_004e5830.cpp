/* NON_MATCHING: 132 vs 128 rows (121 diff lines); s32 lcgRandomRange (signed blt), blockMask ldm order and inverted 0x200 branch improve match; remaining: retail hoists loop limit 4 into r7 (spilling ids to sp+4) and compares noneFound/noneActing with cmp/cmpeq instead of orrs. */
#include "common.h"
#include "util/Random.h"

/* The battle action masks (g_btlAction) the picker tests the entry masks against. */
struct BattleActionMasks {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ u64 entryMask;
    /* 0x018 */ u8 unk018[0x28];
    /* 0x040 */ u64 disableMask;
    /* 0x048 */ u8 unk048[0x90];
    /* 0x0D8 */ u64 blockMask;
    /* 0x0E0 */ u8 unk0E0[0xC8];
    /* 0x1A8 */ u64 forceMask;
};

/* One 0x408-byte battle entry. */
struct ReactionEntry {
    /* 0x000 */ u64 mask;
    /* 0x008 */ s16 id;
    /* 0x00A */ u8 unk00A[0x26A];
    /* 0x274 */ u16 flags;       /* 0x200: already acting, 0x400: unavailable */
    /* 0x276 */ u8 unk276[0x192];
};

/* One 0x1D0-byte roster record. */
struct ReactionRoster {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ s16 unit;
    /* 0x6C */ u8 unk6C[0x164];
};

/* The battle state as the picker reads it. */
struct ReactionBattle {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ ReactionRoster *roster;
    /* 0x1ED8 */ u8 unk1ED8[0x124];
    /* 0x1FFC */ ReactionEntry *entries;
    /* 0x2000 */ u8 unk2000[0x25A0];
    /* 0x45A0 */ u64 blockFlags;
    /* 0x45A8 */ u64 forceFlags;
};

struct ReactionOwner {
    /* 0x00 */ ReactionBattle *battle;
};

extern "C" {
extern BattleActionMasks g_btlAction;

void *asdOperatorNewD(u32 bytes);
void asdOperatorDeleteC(void *block);
u32 FUN_004c8340(u32 a, s32 id, u32 b, u32 c, u32 d);
u32 FUN_004c60c0(s32 id, u32 b);
void FUN_004fdb18(u32 arg0, u32 arg1, ReactionRoster *record, u32 mask, u32 flag);
void *btlMainFindEntryByListedId(ReactionBattle *battle, s32 unit);
void FUN_004c9160(u32 id, void *target, u32 a, u32 b);

/* Lets a random eligible ally react: collects the entries that qualify, and with a small chance
 * (or when the battle forces it) triggers the reaction of one of them. */
void FUN_004e5830(ReactionOwner *owner, u32 arg1, u32 arg2)
{
    if (g_btlAction.blockMask & owner->battle->blockFlags) {
        return;
    }
    s32 noneFound = 1;
    s32 noneActing = 1;
    s32 *ids = (s32 *)asdOperatorNewD(16);
    s8 count = 0;
    for (s32 i = 0; i < 4; i++) {
        ReactionEntry *entry = &owner->battle->entries[i];
        if ((entry->mask & g_btlAction.entryMask) && !(entry->mask & g_btlAction.disableMask) &&
            (entry->flags & 0x400) == 0) {
            if ((entry->flags & 0x200) == 0) {
                u32 first = FUN_004c8340(0xFFFFFFFF, entry->id, 15, 2, 0xFFFFFFFF);
                u32 second = FUN_004c60c0(entry->id, 15);
                if (((first | second) & 0x170000) == 0) {
                    noneFound = 0;
                    ids[count] = entry->id;
                    count++;
                }
            } else {
                noneActing = 0;
            }
        }
    }
    if (noneFound == 0 && noneActing == 0 && count != 0 &&
        ((s32)lcgRandomRange(99) < 5 || (g_btlAction.forceMask & owner->battle->forceFlags))) {
        s32 pick = lcgRandomRange((u16)(count - 1));
        ReactionRoster *record = &owner->battle->roster[ids[pick]];
        FUN_004fdb18(arg2, arg1, record, 0x200, 1);
        void *target = btlMainFindEntryByListedId(owner->battle, record->unit);
        ((u16 *)target)[0x276 / 2] = 0;
        ((u16 *)target)[0x278 / 2] |= 0x10;
        FUN_004c9160(0x1C, target, 0, 1);
    }
    asdOperatorDeleteC(ids);
}

} /* extern "C" */
