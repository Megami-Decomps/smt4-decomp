/* NON_MATCHING: retail loads the s16 at 0x14 with ldrsh into r1 for the zero test; this build uses ldrh into r0 */
#include "common.h"

extern "C" {

typedef struct GameState {
    /* 0x00 */ u8 unk00[0xDC];
    /* 0xDC */ u8 enabled;
} GameState;

typedef struct FlagBlock {
    /* 0x00 */ u8 unk00[0x2A];
    /* 0x2A */ s16 entryId;
} FlagBlock;

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s16 hasValue;
    /* 0x16 */ u8 unk16[6];
    /* 0x1C */ s32 flagId;
} Entry;

extern GameState g_gameState;

extern FlagBlock *gameFlagsGetBlock(void);
extern Entry *dataTable2FType1GetEntry(s32 id);
extern void gameFlagSetValue(s32 id, s32 value, s32 arg2);
extern void gameFlagsSet(...);

/* When enabled, applies the current data table 0x2f entry: sets its flag, then gameFlagsSet for its id (with 0xff when it has no value). */
void FUN_003a2f54(void)
{
    FlagBlock *block = gameFlagsGetBlock();
    s32 id;
    Entry *entry;

    if (g_gameState.enabled == 0) {
        return;
    }
    id = block->entryId;
    entry = dataTable2FType1GetEntry(id);
    if (entry->flagId != 0) {
        gameFlagSetValue(entry->flagId, 1, 1);
    }
    if (entry->hasValue != 0) {
        gameFlagsSet(id);
        return;
    }
    gameFlagsSet(id, 0xFF);
}

} /* extern "C" */
