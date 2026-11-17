/* battle/btlUnit.c: battle units (the unit itself is in battle/BtlUnitWork.h). */
#ifndef BATTLE_BTLUNIT_H
#define BATTLE_BTLUNIT_H

#include "common.h"
#include <stddef.h>
#include "battle/btlMain.h"
#include "battle/btlUI.h"
#include "battle/BtlUnitWork.h"

/* A skill entry the battle looks up by the main state (Shin Megami Tensei IV). */
typedef struct BtlSkill {
    /* 0x000 */ u8 unk000[0x1B4];
    /* 0x1B4 */ s16 unk1B4;
    /* 0x1B6 */ s16 unk1B6;
} BtlSkill;

/* A skill entry the battle looks up by the main state (Apocalypse layout). */
extern "C" {
void btlReflectCreateKind21(s32 id, u32 flags, u32 target, u32 parameter, u32 value, s32 enabled);
}

extern "C" {
bool FUN_003db7b4(void *arg0);
}

#endif
