#include "common.h"

extern "C" {

typedef struct ConditionalEntry {
    /* 0x00 */ s32 id;             /* -1 ends the table */
    /* 0x04 */ s16 requiredFlag;   /* 0 = none */
    /* 0x06 */ s16 forbiddenFlag;  /* 0 = none */
    /* 0x08 */ u8 unk08[2];
    /* 0x0A */ s16 terminal;       /* -1 = last entry of the id's chain */
} ConditionalEntry;

extern s32 FUN_003b5620(void);
extern ConditionalEntry *aocDataTable23GetEntry(s32 index);
extern s32 gameFlagIsSet(s32 flag);

/* Finds the entry index for `id` whose flag conditions hold: -1 when absent, -2 when its chain ended without a match. */
s32 conditionalTableFindIndex(s32 id)
{
    s32 count = FUN_003b5620();
    s32 i;

    for (i = 0; i < count; i++) {
        ConditionalEntry *entry = aocDataTable23GetEntry(i);

        if (entry->id == -1) {
            break;
        }
        if (entry->id == id) {
            if ((entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0)
                && (entry->forbiddenFlag == 0 || gameFlagIsSet(entry->forbiddenFlag) == 0)) {
                if (entry->terminal == -1) {
                    return -1;
                }
                return i;
            }
            if (entry->terminal == -1) {
                return -2;
            }
        }
    }
    return -1;
}

} /* extern "C" */
