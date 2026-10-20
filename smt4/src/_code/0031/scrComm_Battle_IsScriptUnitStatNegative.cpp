/* Reports through scrSetResult whether the stat slot selected by scrGetArg (0/1/2 -> slot 7/10/11) of the current unit is negative; always returns 1. */
#include "common.h"

extern "C" {

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x72];
    /* 0x72 */ s16 stats[1];
} Unit;

typedef struct UnitRef {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Unit *unit;
} UnitRef;

extern u32 g_btlScriptUnit;

extern s32 scrGetArg(void);
extern UnitRef *btlUnitGet(u32 id);
extern void scrSetResult(s32 value);

u32 scrComm_Battle_IsScriptUnitStatNegative(void)
{
    s32 which = scrGetArg();
    s32 slot = 0;
    UnitRef *ref;
    if (which == 0) {
        slot = 7;
    } else if (which == 1) {
        slot = 10;
    } else if (which == 2) {
        slot = 11;
    }
    Unit *unit;
    s32 value;

    ref = btlUnitGet(g_btlScriptUnit);
    unit = ref->unit;
    value = unit->stats[slot];
    scrSetResult(value <= -1);
    return 1;
}

}
