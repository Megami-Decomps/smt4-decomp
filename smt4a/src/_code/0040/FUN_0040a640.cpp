/* NON_MATCHING: record addressing now matches retail (flat arrays, unfolded (group-1)*7+index and group*2-2+index); retail still keeps one gameDataBlocksGetStats call with the record selection out of line after it, while the build duplicates the call into the kind-0 remap path and predicates the selection. */
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
    /* 0x01C */ StatRecord normal[12 * 7];
    /* 0x16C */ StatRecord special[2];
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
        if (kind == 0) {
            if (index == 7) {
                index = 6;
            }
        } else if (index == 6) {
            index = 0;
        } else if (index == 7) {
            index = 1;
        }

        StatBlock *stats = gameDataBlocksGetStats();
        StatRecord *record;
        switch (kind) {
        case 0:
            record = &stats->normal[(group - 1) * 7 + index];
            break;
        case 1:
            record = &stats->special[group * 2 - 2 + index];
            break;
        default:
            record = NULL;
            break;
        }
        record->count = 0;
        record->level = 0;
    }
}

} /* extern "C" */
