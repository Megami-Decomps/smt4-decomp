/* NON_MATCHING: retail keeps the constant 1 in r2 across the flag set and the tail call (one instruction more), so the final branch is not the branch-to-next armlink turns into a nop. */
#include "common.h"

extern "C" {

/* A data table 2E entry: the id it answers to and the game flag it sets. */
typedef struct Table2EEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 id;               /* -1 ends the table */
    /* 0x22 */ s16 gameFlag;         /* 0: none */
} Table2EEntry;

s32 dataTable2ECount(void);
Table2EEntry *dataTable2EGetEntry(s32 index);
s32 gameFlagIsSet(s32 flag);
void gameFlagSetValue(s32 flag, s32 value);
void gameFlagsGetBlock(void);
void gameDataSetEntryEnabled(s32 id, u32 arg1, bool enabled);

/* Sets the game flag data table 2E ties to `id` (if it is not set yet), then forwards to
 * gameDataSetEntryEnabled with the enabled flag set (the function that follows). */
void FUN_004bc95c(s32 id, u32 arg1)
{
    s32 index = 0;

    if (dataTable2ECount() > 0) {
        for (;;) {
            Table2EEntry *entry = dataTable2EGetEntry(index);

            if (entry->id == -1) {
                break;
            }
            if (entry->id == id) {
                if (entry->gameFlag != 0 && gameFlagIsSet(entry->gameFlag) == 0) {
                    gameFlagSetValue(entry->gameFlag, 1);
                }
                break;
            }
            index++;
            if (dataTable2ECount() <= index) {
                break;
            }
        }
    }
    gameFlagsGetBlock();
    gameDataSetEntryEnabled(id, arg1, true);
}

} /* extern "C" */
