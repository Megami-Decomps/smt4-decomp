#include "shard/Shard003B.h"

extern "C" {

typedef struct BtlUnitCounters {
    /* 0x00 */ u8 unk00[0xAC];
    /* 0xAC */ s32 unkAC;
    /* 0xB0 */ u8 unkB0[4];
    /* 0xB4 */ s32 unkB4;
} BtlUnitCounters;

typedef struct BtlUnitObj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ BtlUnitCounters *obj;
} BtlUnitObj;

extern BtlUnitObj *btlUnitGet(u32 id);
extern void scrSetResult(s32 value);
extern u32 g_btlScriptUnit;

/* Script command: result is 1 when either counter of the unit's object (+0xAC, +0xB4) is positive. */
u32 scrCommUnitHasCounters(void)
{
    BtlUnitObj *unit = btlUnitGet(g_btlScriptUnit);

    if (unit->obj->unkAC > 0) {
        scrSetResult(1);
    } else {
        scrSetResult(0 < unit->obj->unkB4);
    }
    return 1;
}

} /* extern "C" */
