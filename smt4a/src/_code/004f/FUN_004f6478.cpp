/* NON_MATCHING: only r0/r1 swapped in the slot address computation (base load vs offset) */
#include "common.h"

struct EffectSlot {
    char name[0x10];  // 0x00
    s16 id;           // 0x10
    u8 unk12[4];      // 0x12
};

struct EffectUnit {
    u8 unk00[0x58];      // 0x00
    EffectSlot slots[4]; // 0x58
};

struct EffectBattleState {
    u8 unk0000[0x1F54];  // 0x0000
    EffectUnit *unit;    // 0x1F54
};

static const char g_noEffectName[] = "NOT_EFT";

extern "C" {

void *btlGetMainState(void);
s32 btlScriptUnitHasFlags(void);
s32 libc_strcmp(const char *a, const char *b);

/* Finds the id of the first of the unit's four effect slots named "NOT_EFT"; 30 when none, -1 when the script unit has flags. */
s32 FUN_004f6478(EffectBattleState *state)
{
    btlGetMainState();
    if (btlScriptUnitHasFlags() != 0) {
        return -1;
    }
    s32 result = 30;
    for (s32 i = 0; i < 4; i++) {
        EffectSlot *slot = &state->unit->slots[i];

        if (libc_strcmp(g_noEffectName, slot->name) == 0) {
            return slot->id;
        }
    }
    return result;
}

} /* extern "C" */
