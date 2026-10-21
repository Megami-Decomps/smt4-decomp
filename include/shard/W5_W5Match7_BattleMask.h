#ifndef SHARD_W5_W5MATCH7_BATTLEMASK_H
#define SHARD_W5_W5MATCH7_BATTLEMASK_H
#include "common.h"
#include "shard/W6_W6Match1_BattleCountSlot.h"
struct BattleMaskState {
    union {
        /* 0x0000 */ u8 unk0000[0x4554];
        struct {
            /* 0x0000 */ u8 unk0000BeforeEntryMask[0x1ffc];
            /* 0x1ffc */ u64* mask;
        } entryMaskView;
        struct {
            /* 0x0000 */ u8 unk0000BeforeActivity[0xec];
            /* 0x00ec */ s32 first;
            /* 0x00f0 */ u8 unk00f0[0x1c];
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
            u64 active;
            u64 required;
            u64 unk10;
            u64 excluded;
        } eligibility;
    };
    /* 0x40 */ u64 first;
    /* 0x48 */ u8 unk48[0x20];
    /* 0x68 */ u64 second;
};
extern "C" {
BattleMaskState *btlGetMainState(void);
extern BattleMaskPresets g_battleMaskPresets;
}
#endif
