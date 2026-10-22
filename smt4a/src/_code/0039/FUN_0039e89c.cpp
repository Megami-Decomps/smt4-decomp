/* NON_MATCHING: retail loads the preset words in different groups (ldm of words 1-3, 6-7, 8-9) and allocates registers differently; the loop body is the same. */
#include "common.h"

/* Battle unit, as this command sees it: its status flags and id. */
struct BtlMaskUnit {
    /* 0x000 */ u64 flags;
    /* 0x008 */ u8 unk008[0x15e];
    /* 0x166 */ u16 id;
    /* 0x168 */ u8 unk168[0x2a0];
};

struct BtlMaskMainState {
    /* 0x0000 */ u8 unk0000[0x1ffc];
    /* 0x1FFC */ BtlMaskUnit *units;
};

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
u32 scrGetArg(u32 index);
BtlMaskMainState *btlGetMainState(void);

/* Script command: adds the preset flags to every battle unit 4..53 with id argument 0 that has the
 * required flags and none of the excluded ones. */
u32 FUN_0039e89c(void)
{
    u32 id = scrGetArg(0);
    BtlMaskMainState *state = btlGetMainState();
    BtlMaskPresets presets = g_battleMaskPresets;
    s32 i;

    for (i = 4; i < 54; i++) {
        BtlMaskUnit *unit = &state->units[i];
        if ((unit->flags & presets.required) && !(unit->flags & presets.excluded) &&
            (unit->flags & presets.requiredToo) && unit->id == id) {
            unit->flags |= presets.added;
        }
    }
    return 1;
}

} /* extern "C" */
