/* NON_MATCHING: 8 lines, literal pool order only: retail pools the -17.0f limit ahead of g_btlMain's address (a const
 * local holding only that one of the four camera-relative limits gives retail's pool, but was rejected as steering). */
#include <stdio.h>
#include "battle/BtlMainAccess.h"
#include "battle/BtlSideLimits.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include <string.h>
#include "battle/BtlGlobals.h"

/* An entry of the battle effect name table (0x24 bytes): the effect's file name and up to two sub-effects. */
struct BtlEffectEntry {
    /* 0x00 */ char name[0x10];
    /* 0x10 */ s32 firstCount;
    /* 0x14 */ u16 firstHandle;
    /* 0x16 */ u8 unk16[2];
    /* 0x18 */ s32 secondCount;
    /* 0x1C */ u16 secondHandle;
    /* 0x1E */ u8 unk1E[2];
    /* 0x20 */ u32 value;
};

#define BTL_EFFECT_ENTRIES 0x191

extern "C" {

extern BtlEffectEntry g_btlEffectSetTable[];

void btlQueueKeyedScalarReflectAction(u32 handle, s32 owner, s32 count, s32 a, s32 b, s32 side, s32 c);

/* Finds the effect table entry whose file name ("<name>.eft") is `effectName` (Apocalypse's twin FUN_0047ed10
 * searches its effect set table the same way). The buffer is cleared before the loop and again for each name. */
static BtlEffectEntry *findEffectEntry(const char *effectName)
{
    char name[0x20] = { 0 };

    for (s32 i = 0; i < BTL_EFFECT_ENTRIES; i++) {
        memset(name, 0, sizeof(name));
        BtlEffectEntry *entry = &g_btlEffectSetTable[i];

        sprintf(name, "%s.eft", entry->name);
        if (strcmp(name, effectName) == 0) {
            return entry;
        }
    }
    return NULL;
}

/* Starts the named battle effect for `owner`: finds its table entry by file name and plays its sub-effects
 * on the side (1-5) the horizontal position `x` falls on. */
u32 btlEffectSetStartByName(const char *effectName, s32 owner, u32 kind, f32 x)
{
    BtlEffectEntry *entry;
    BtlMainState *state;
    s32 side;

    if (jyoucyuGetTableEntry(1) != 0) {
        return 0;
    }
    entry = findEffectEntry(effectName);
    state = btlGetMainState();
    switch (kind) {
    case 2:
    case 5:
    case 8:
    case 9:
    case 0xC:
        /* Fixed limits: each outer limit is a side's width (1.975) beyond its inner one. */
        if (btlIsBelow(x, -0.99f - 1.975f)) {
            side = 5;
        } else if (btlIsBelow(x, -0.99f)) {
            side = 4;
        } else if (btlIsAbove(x, 2.94f)) {
            side = 1;
        } else if (btlIsAbove(x, 2.94f - 1.975f)) {
            side = 2;
        } else {
            side = 3;
        }
        break;
    case 6:
    case 7:
    case 0xB:
        side = 3;
        break;
    default: {
        BtlCameraVector3 eye = g_btlMain->eye;

        if (btlIsBelow(x, eye.x + -17.0f)) {
            side = 5;
        } else if (btlIsBelow(x, eye.x + -9.0f)) {
            side = 4;
        } else if (btlIsAbove(x, eye.x + 17.0f)) {
            side = 1;
        } else if (btlIsAbove(x, eye.x + 9.0f)) {
            side = 2;
        } else {
            side = 3;
        }
        break;
    }
    }
    if (entry == NULL) {
        return 0;
    }
    if (entry->firstCount != 0) {
        btlQueueKeyedScalarReflectAction(entry->firstHandle, owner, entry->firstCount, 0, 0, side, 0);
    }
    if (entry->secondCount != 0) {
        btlQueueKeyedScalarReflectAction(entry->secondHandle, owner, entry->secondCount, 0, 0, side, 0);
    }
    state->effectValue = entry->value;
    return 1;
}

} /* extern "C" */
