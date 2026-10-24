/* NON_MATCHING: register allocation and operations match; retail lays the else path (unit record lookup) out of line after the shared scrSetResult call, built duplicates the call/return tail */
#include "common.h"

extern "C" {

struct ResultUnitRecord {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 demonId;
};

struct ResultEntry {
    /* 0x000 */ s8 unit;
    /* 0x001 */ u8 unk001[0x49];
    /* 0x04a */ u16 overrideId;
    /* 0x04c */ u8 unk04c[0x620 - 0x4c];
};

struct ResultState {
    /* 0x0000 */ u8 unk0000[0x3654];
    /* 0x3654 */ ResultEntry entries[24];
    /* 0xc954 */ u8 unkc954[0xcf78 - 0xc954];
    /* 0xcf78 */ s32 current;
};

extern ResultState *g_result;

s32 scrGetArg(void);
void scrSetResult(s32 value);
ResultUnitRecord *gameGetUnitRecord(s32 unit);

/* Script command: the demon id of the current result entry, from its override id when the argument is non-zero, else from its unit's record. */
u32 FUN_00324540(void)
{
    s32 useOverride = scrGetArg();

    if (g_result != NULL) {
        ResultEntry *entry = &g_result->entries[g_result->current];
        u32 id;

        if (useOverride != 0) {
            id = entry->overrideId;
        } else {
            id = gameGetUnitRecord(entry->unit)->demonId;
        }
        scrSetResult(id);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */
