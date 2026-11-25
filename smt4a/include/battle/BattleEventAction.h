#ifndef BATTLE_BATTLEEVENTACTION_H
#define BATTLE_BATTLEEVENTACTION_H

#include "battle/BattleEventAssets.h"
#include "script/ScriptEntry.h"

struct BtlMainStateA;

/* The Apocalypse event module's pointer and masks share one base address in retail. */
struct BattleEventModuleA {
    /* 0x00 */ BattleEventAssetLoadState *event;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u64 conditionMasks[3];
    /* 0x20 */ u64 pendingMask;
    /* 0x28 */ u64 uiMask;
};
typedef char BattleEventModuleAOffsetsCheck[
    sizeof(BattleEventModuleA) == 0x30 && offsetof(BattleEventModuleA, conditionMasks) == 0x08 &&
    offsetof(BattleEventModuleA, pendingMask) == 0x20 && offsetof(BattleEventModuleA, uiMask) == 0x28 ? 1 : -1];

extern "C" {
extern BattleEventModuleA g_btlEvent;
u32 battleEventPrepareAuxAndStartScript(BattleEventAssetLoadState *event, BtlMainStateA *battle);
u32 btlActionStepFinishPendingChanges(BattleEventAssetLoadState *event, BtlMainStateA *battle);
} /* extern "C" */

#endif
