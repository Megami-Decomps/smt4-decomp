#ifndef SHARD_W5_W5MATCH7_BATTLEMASK_H
#define SHARD_W5_W5MATCH7_BATTLEMASK_H
#include "common.h"
#include "shard/W6_W6Match1_BattleCountSlot.h"
#include <stddef.h>
struct BattleRosterRecordA;
/* One 0x408-byte battle entry: its mask and id. */
struct BattleMaskEntry {
    /* 0x000 */ u64 mask;
    /* 0x008 */ s16 id;
    /* 0x00a */ u8 unk00a[0x15c];
    /* 0x166 */ u16 unitId;
    /* 0x168 */ u8 unk168[0xf0];
    /* 0x258 */ s32 hp;
    /* 0x25c */ s32 maxHp;
    /* 0x260 */ u8 unk260[0x1a8];
};
typedef char BattleMaskEntrySizeCheck[sizeof(BattleMaskEntry) == 0x408 &&
    offsetof(BattleMaskEntry, unitId) == 0x166 && offsetof(BattleMaskEntry, maxHp) == 0x25c ? 1 : -1];
struct BattleMaskState {
    union {
        /* 0x0000 */ u8 unk0000[0x4554];
        struct {
            /* 0x0000 */ u8 unk0000BeforeEntryMask[0x1ffc];
            /* 0x1ffc */ u64* mask;
        } entryMaskView;
        struct {
            /* 0x0000 */ u8 unk0000BeforeEntries[0x1ffc];
            /* 0x1ffc */ BattleMaskEntry *entries;
        } entryView;
        struct {
            u8 prefix0000[0x1ED4];
            /* 0x1ED4 */ BattleRosterRecordA *roster;
        } rosterView;
        struct {
            /* 0x0000 */ u8 unk0000BeforeActivity[0xec];
            /* 0x00ec */ s32 first;
            union {
                /* 0x00f0 */ u8 unk00f0[0x1c];
                /* 0x00f0 */ s32 currentAction;
            };
            /* 0x010c */ s32 second;
        } activity;
    };
    /* 0x4554 */ s32 result;
    union {
        /* 0x4558 */ u8 unk4558[0x48];
        struct {
            /* 0x4558 */ u8 unk4558BeforeSlots[4];
            /* 0x455c */ BattleCountSlot slots[16];
        } counters;
    };
    /* 0x45a0 */ u64 mask;
    union {
        /* 0x45a8 */ u8 unk45a8[0x730];
        struct {
            /* 0x45a8 */ u8 unk45a8BeforeActive[0x729];
            /* 0x4cd1 */ u8 present;
        } activeEntry;
        struct {
            /* 0x45a8 */ u8 unk45a8BeforeSelected[0x724];
            /* 0x4ccc */ s32 index;    /* 0xff when none */
        } selectedEntry;
        struct {
            /* 0x45a8 */ u8 unk45a8BeforeCapacity[0x6C8];
            /* 0x4c70 */ s16 capacity[2];
            /* 0x4c74 */ u8 unk4c74[4];
            /* 0x4c78 */ s16 requested[2];
        } capacityView;
        struct {
            u8 unk45a8BeforeHistory[0x18];
            u8 records[0x600]; /* 0x45c0, 128 records of 0xc bytes */
        } history;
    };
    /* 0x4cd8 */ u64 scriptFlags;
};
struct BattleMaskPresets {
    union {
        /* 0x00 */ u8 unk00[0x40];
        struct {
            /* 0x00 */ u8 unk00BeforeEntryFlags[0x28];
            /* 0x28 */ u64 entryFlags;
        } presets;
        struct {
            u8 unk00BeforeBlocked[0x30];
            /* 0x30 */ u64 blockedMask; /* bits that stop a scripted effect */
        } blockedView;
        struct {
            u8 unk00BeforeClear[0x38];
            /* 0x38 */ u64 clearMask; /* bits cleared from BattleMaskState::mask */
        } clearView;
        struct {
            u64 active;
            u64 required;
            u64 unk10;
            u64 excluded;
            /* 0x20 */ u64 downed; /* bits a revive clears */
        } eligibility;
    };
    /* 0x40 */ u64 first;
    /* 0x48 */ u64 scriptMask; /* bits scripted battle commands set or clear in BattleMaskState::mask */
    /* 0x50 */ u8 unk50[0x18];
    /* 0x68 */ u64 second;
};
typedef char BattleMaskPresetsDownedOffsetCheck[
    offsetof(BattleMaskPresets, eligibility.downed) == 0x20 ? 1 : -1];
typedef char BattleMaskCurrentActionLayoutCheck[
    offsetof(BattleMaskState, activity.currentAction) == 0xf0 &&
    sizeof(BattleMaskState) == 0x4ce0 ? 1 : -1];
typedef char BattleMaskRosterOffsetCheck[
    offsetof(BattleMaskState, rosterView.roster) == 0x1ED4 &&
    sizeof(BattleMaskState) == 0x4CE0 ? 1 : -1];
extern "C" {
BattleMaskState *btlGetMainState(void);
extern BattleMaskPresets g_battleMaskPresets;
}
#endif
