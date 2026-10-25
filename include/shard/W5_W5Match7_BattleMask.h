#ifndef SHARD_W5_W5MATCH7_BATTLEMASK_H
#define SHARD_W5_W5MATCH7_BATTLEMASK_H
#include "common.h"
#include <stddef.h>
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
            /* 0x38 */ u64 clearMask; /* bits cleared from the battle state's mask */
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
    /* 0x48 */ u64 scriptMask; /* bits scripted battle commands set or clear in the battle state's mask */
    /* 0x50 */ u8 unk50[0x18];
    /* 0x68 */ u64 second;
};
typedef char BattleMaskPresetsDownedOffsetCheck[
    offsetof(BattleMaskPresets, eligibility.downed) == 0x20 ? 1 : -1];
extern "C" {
extern BattleMaskPresets g_battleMaskPresets;
}
#endif
