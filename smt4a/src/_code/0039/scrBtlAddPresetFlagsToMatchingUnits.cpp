#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "script/ScriptArgs.h"

/* Flag masks: required (0, 1), excluded (3) and the flags to add (4). */
struct BtlMaskPresets {
    /* 0x00 */ u64 required;
    /* 0x08 */ u64 requiredToo;
    /* 0x10 */ u64 unk10;
    /* 0x18 */ u64 excluded;
    /* 0x20 */ u64 added;
};

extern "C" {
extern BtlMaskPresets g_battleMaskPresets;

/* Script command: adds the preset flags to every battle unit 4..53 with id argument 0 that has the
 * required flags and none of the excluded ones. */
u32 scrBtlAddPresetFlagsToMatchingUnits(void)
{
    u32 id = scrGetArg(0);
    BtlMainStateA *state = btlGetMainState();
    u64 required = g_battleMaskPresets.required;
    u64 requiredToo = g_battleMaskPresets.requiredToo;
    u64 excluded = g_battleMaskPresets.excluded;
    u64 added = g_battleMaskPresets.added;
    s32 i;

    for (i = 4; i < 54; i++) {
        BtlCombatantEntryA *unit = &state->entries[i];
        if ((unit->flags & required) && !(unit->flags & excluded) &&
            (unit->flags & requiredToo) && unit->id == id) {
            unit->flags |= added;
        }
    }
    return 1;
}

} /* extern "C" */
