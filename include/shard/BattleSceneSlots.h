/* The battle scene work's 109 target slots. */
#ifndef SHARD_BATTLESCENESLOTS_H
#define SHARD_BATTLESCENESLOTS_H

#include "common.h"
#include <stddef.h>

/* One target slot; -1 marks an unused id. */
struct BattleTargetSlot {
    /* 0x00 */ s32 primaryId;
    /* 0x04 */ s32 secondaryId;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ s32 effectId;
};

struct BattleSceneSlots {
    /* 0x0000 */ u8 unk0000[0x2318];
    /* 0x2318 */ BattleTargetSlot slots[109];
};

typedef char BattleTargetSlotSizeCheck[sizeof(BattleTargetSlot) == 0x1c ? 1 : -1];
typedef char BattleSceneSlotsOffsetCheck[offsetof(BattleSceneSlots, slots) == 0x2318 ? 1 : -1];

#endif
