#ifndef SHARD_W5_W5MATCH7_BATTLEMASK_H
#define SHARD_W5_W5MATCH7_BATTLEMASK_H
#include "common.h"
struct BattleMaskState {
    /* 0x0000 */ u8 unk0000[0x4554];
    /* 0x4554 */ s32 result;
    /* 0x4558 */ u8 unk4558[0x48];
    /* 0x45a0 */ u64 mask;
    /* 0x45a8 */ u8 unk45a8[0x730];
    /* 0x4cd8 */ u64 scriptFlags;
};
struct BattleMaskPresets {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u64 first;
    /* 0x48 */ u8 unk48[0x20];
    /* 0x68 */ u64 second;
};
extern "C" {
BattleMaskState *btlGetMainState(void);
extern BattleMaskPresets DAT_00570d78;
}
#endif
