/* NON_MATCHING: retail keeps one gameDataBlocksGetStats call and selects the record out of line after it; this build duplicates the call into the kind branches. */
#include "common.h"
#include "gamedata/DataTableAccess.h"

extern "C" {

typedef struct StatResetEntry {
    /* 0x00 */ u8 group;      /* 1-based */
    /* 0x01 */ u8 kind;       /* 0 = normal record, 1 = special record */
    /* 0x02 */ u16 index;
    /* 0x04 */ u8 unk04[0x90];
} StatResetEntry;

typedef struct StatRecord {
    /* 0x00 */ u16 count;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 level : 5;
    u8 unk03_5 : 3;
} StatRecord;

typedef struct StatBlock {
    /* 0x000 */ u8 unk000[0x1c];
    /* 0x01C */ StatRecord normal[12][7];
    /* 0x16C */ StatRecord special[1][2];
} StatBlock;

StatResetEntry *dataTable18Sub0GetEntries(void);
StatBlock *gameDataBlocksGetStats(void);

/* Clears the count and level of the stat record each table-18 entry names. */
void FUN_0040a640(void)
{
    StatResetEntry *entries = dataTable18Sub0GetEntries();
    s32 count = dataTable18Sub0GetCount();

    for (s32 i = 0; i < count; i++) {
        u8 group = entries[i].group;
        u8 kind = entries[i].kind;
        u32 index = entries[i].index;
        if (kind != 0) {
            if (index == 6) {
                index = 0;
            } else if (index == 7) {
                index = 1;
            }
        } else if (index == 7) {
            index = 6;
        }

        StatBlock *stats = gameDataBlocksGetStats();
        StatRecord *record;
        if (kind == 0) {
            record = &stats->normal[group - 1][index];
        } else if (kind == 1) {
            record = &stats->special[group - 1][index];
        } else {
            record = NULL;
        }
        record->count = 0;
        record->level = 0;
    }
}

} /* extern "C" */
