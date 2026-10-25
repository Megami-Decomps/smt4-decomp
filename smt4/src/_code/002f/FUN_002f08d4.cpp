/* Checks whether any usable unit (or the fallback unit) has `value` in the stat slot selected by scrGetArg(1); always returns 1 and reports the result through scrSetResult. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct Unit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x6E];
    /* 0x072 */ s16 stats[1];
    /* 0x074 */ u8 unk074[0x214];
} Unit; /* 0x288 */

typedef struct UnitManager {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ Unit *units;
    /* 0x1FC4 */ u8 unk1FC4[0x2A01];
    /* 0x49C5 */ s8 hasFallback;
} UnitManager;

extern Unit *btlMainFindActiveEntry(void);
extern s32 btlScriptResolveGroupArg(s32 group);
extern void FUN_002499fc(u32 owner, s32 *first, s32 *count);
extern s32 scrGetArg(s32 index);

u32 FUN_002f08d4(void)
{
    u32 owner;
    s32 slot;
    s32 kind;
    s32 value;
    s32 first;
    s32 count;
    s32 i;

    owner = btlScriptResolveGroupArg(scrGetArg(0));
    kind = scrGetArg(1);
    slot = 0;
    if (kind == 0) {
        slot = 7;
    } else if (kind == 1) {
        slot = 10;
    } else if (kind == 2) {
        slot = 11;
    }
    value = scrGetArg(2);
    FUN_002499fc(owner, &first, &count);
    for (i = first; i < first + count; i++) {
        Unit *unit = &reinterpret_cast<UnitManager *>(btlGetMainState())->units[i];

        if ((unit->flags & 0x10) == 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0
            && unit->stats[slot] == value) {
            scrSetResult(1);
            return 1;
        }
    }
    if (reinterpret_cast<UnitManager *>(btlGetMainState())->hasFallback != 0) {
        Unit *unit;

        reinterpret_cast<UnitManager *>(btlGetMainState());
        unit = btlMainFindActiveEntry();
        if (unit != NULL && unit->stats[slot] == value) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

}
