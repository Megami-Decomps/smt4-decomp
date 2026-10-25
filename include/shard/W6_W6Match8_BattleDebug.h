#ifndef SHARD_W6_W6MATCH8_BATTLEDEBUG_H
#define SHARD_W6_W6MATCH8_BATTLEDEBUG_H

#include "common.h"
#include "shard/W6_W6Match1_Table03Record.h"
#include "battle/btlUI.h"
#include "gamedata/Table02Record.h"
#include "shard/W5_W5Match2_PairedIds.h"

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

#ifdef __cplusplus
extern "C" {
#endif

s32 FUN_003ae820(BtlUi *arg0);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 FUN_003bbaa8(void *arg0);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

Table02Record* FUN_003bc0ac(u32 keyA, u32 keyB, s32 occurrence);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void cecInboxReadMessages(u32 unused, u8 *messages, int first, int count);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 *keyedRecordGet(s32 index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 dataTable33IsLoaded(void *arg0);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 recordContainsPairedId(const PairedIdList *list,u32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 btlUiIsPanelHolderReady(u32 arg0);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 randomGetLowerTenBits(u32 first,u32 second);

#ifdef __cplusplus
}
#endif

#endif
