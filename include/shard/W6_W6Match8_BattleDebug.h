#ifndef SHARD_W6_W6MATCH8_BATTLEDEBUG_H
#define SHARD_W6_W6MATCH8_BATTLEDEBUG_H

#include "common.h"
#include "shard/W6_W6Match1_Table03Record.h"

struct BtlMainState;
struct BattleDebugOwnerView {
    u8 unk0000[0x5c];
    u32 job;
    u8 unk0060[0x4448];
    u32 flags;
};
struct BattleDebugWork {
    u32 state;
    s32 menuMode;
    u8 unk08[8];
    u32 listBox;
    u8 unk14[0xc];
};
struct BattleDebugGlobals {
    s8 category;
    u8 unk01;
    s16 selection;
    u32 selectedId;
    BattleDebugWork *work;
};
extern "C" {
extern BattleDebugGlobals g_btlDebugState;
void btlDebugOpen(BtlMainState *state, s32 menuMode);
s32 btlDebugDispatchCurrentJob(u32 handle);
void FUN_0021ec34(u32 handle);
}

extern "C" {
Table03Record* aocGetTableRecordOrFallback(s32 index);
}

#endif
