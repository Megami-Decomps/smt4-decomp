/* NON_MATCHING: signed-byte argument packing and 64-bit flag scheduling differ; -O2 candidate. */
#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/FUN_004186e0.h"

struct PreparedBattleAction {
    u32 values[5]; // 0x00
    u8 unk14[8];
    u32 flags; // 0x1c
};
struct BattleActionSource {
    u8 unk0000[0xec];
    s32 actionId; // 0x00ec
    s32 enemyId; // 0x00f0
    u8 unk00f4[0x8c];
    s32 first; // 0x0180
    s32 second; // 0x0184
    u32 unk0188;
    u32 variation; // 0x018c
    u32 target; // 0x0190
    u32 savedValues[5]; // 0x0194
    u8 unk01a8[0x43f8];
    u64 flags; // 0x45a0
};
struct ActionPreparationMasks {
    u8 unk000[0x100];
    u64 saved; // 0x100
    u8 unk108[0x28];
    u64 flagged; // 0x130
    u8 unk138[0x48];
    u64 highId; // 0x180
};
extern "C" {
extern ActionPreparationMasks g_btlMain;
void drawObjectInitialize(PreparedBattleAction *, s32, s32, s32, s32, s32);
u32 FUN_004bb80c(s32);
void FUN_004bb9c0(PreparedBattleAction *, u32);
void aocGetTableRecordOrFallback(s32);
void FUN_004bbc4c(PreparedBattleAction *, s32, s32, s32);
s32 idIsAtLeast350(u32);

// Prepare an action from a saved selection, a normal action, or an enemy definition.
void btlActionPrepareFromSource(BattleActionSource *source, PreparedBattleAction *action, s32 useSaved)
{
    s32 actionId = source->actionId;
    if (useSaved && (source->flags & g_btlMain.saved)) {
        drawObjectInitialize(action, actionId, source->first, source->second,
                     (s8)source->variation, (s8)source->target);
        action->values[0] = source->savedValues[0];
        action->values[1] = source->savedValues[1];
        action->values[2] = source->savedValues[2];
        action->values[3] = source->savedValues[3];
        action->values[4] = source->savedValues[4];
        return;
    }
    if (actionId >= 0) {
        if (source->first < 0 || source->second < 0) {
            FUN_004bb9c0(action, FUN_004bb80c(actionId));
        } else {
            drawObjectInitialize(action, actionId, source->first, source->second,
                         (s8)source->variation, (s8)source->target);
        }
    } else if (source->enemyId >= 0) {
        aocGetTableRecordOrFallback(source->enemyId);
        FUN_004bbc4c(action, source->enemyId, (s8)source->variation, (s8)source->target);
    }
    u64 flags;
    if (action->flags & 4)
        flags = source->flags | g_btlMain.flagged;
    else
        flags = source->flags & ~g_btlMain.flagged;
    source->flags = flags;
    if (FUN_004186a4()) {
        if (idIsAtLeast350(FUN_004186e0())) {
            source->flags |= g_btlMain.highId;
            return;
        }
    }
    source->flags &= ~g_btlMain.highId;
}
}
