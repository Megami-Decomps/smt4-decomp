/* NON_MATCHING: retail loads the preset words in different groups (ldm of words 1-3, 6-7, 8-9) and allocates registers differently; the loop body is the same. */
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
u32 FUN_0039e89c(void)
{
    u32 id = scrGetArg(0);
    BtlMainStateA *state = btlGetMainState();
    BtlMaskPresets presets = g_battleMaskPresets;
    s32 i;

    for (i = 4; i < 54; i++) {
        BtlCombatantEntryA *unit = &state->entries[i];
        if ((unit->flags & presets.required) && !(unit->flags & presets.excluded) &&
            (unit->flags & presets.requiredToo) && unit->id == id) {
            unit->flags |= presets.added;
        }
    }
    return 1;
}

} /* extern "C" */
