/* NON_MATCHING: retail shares the final return after the value branch and keeps the candidate slot address unfolded (add #44; ldrsb [r0]). */
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

/* One candidate row of the selection screen. */
typedef struct SelectionEntry {
    /* 0x000 */ s8 slot;   /* party slot of the candidate */
    /* 0x001 */ u8 unk001[0x14F];
} SelectionEntry;

typedef struct SelectionScreen {
    /* 0x0000 */ u8 unk0000[0x442C];
    /* 0x442C */ SelectionEntry entries[37];
    /* 0x74BC */ u8 unk74BC[4];
    /* 0x74C0 */ s32 selected;
    /* 0x74C4 */ u8 unk74C4[0x104];
    /* 0x75C8 */ s32 statIndex;
    /* 0x75CC */ u32 value;
} SelectionScreen;

typedef struct SelectionScreenHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SelectionScreen *screen;
} SelectionScreenHolder;

typedef struct SlotRecordStats {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 stats[1];
} SlotRecordStats;

extern SelectionScreenHolder g_engineCleanupOwner;

SlotRecordStats *gameGetSlotRecord(s32 slot);
u8 flagAt4IsClearOrMissing(void);
u32 uiSelectedRecordGetSecond(void);
u32 uiSelectedRecordGetThird(void);

/* Script command: with argument 0 set, returns the open screen's value (or the selected record's third value);
 * otherwise the selected candidate's chosen stat (or the selected record's second value). */
u32 FUN_003c4e64(void)
{
    s32 useValue = scrGetArg(0);
    SelectionScreen *screen = g_engineCleanupOwner.screen;

    u32 result;

    if (screen != NULL) {
        if (useValue != 0) {
            scrSetResult(screen->value);
            return 1;
        }
        result = gameGetSlotRecord(screen->entries[screen->selected].slot)->stats[g_engineCleanupOwner.screen->statIndex];
    } else if (flagAt4IsClearOrMissing() != 0) {
        result = 0;
    } else if (useValue != 0) {
        result = uiSelectedRecordGetThird();
    } else {
        result = uiSelectedRecordGetSecond();
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
