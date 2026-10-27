/* NON_MATCHING: 52 of 52 rows now (one shared gameDataBlocksGetStats call, record selection in findRecord, unfolded group*2-2): only the callee-saved numbering of the loop locals (retail: entries r6, kind r5, group r7, index r8) and the zero register reused for the null record (`movne r0, sl`) differ. */
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

static __inline StatRecord *findRecord(StatBlock *stats, u8 kind, u8 group, u32 index)
{
    switch (kind) {
    case 0:
        {
            u32 first = (group - 1) * 7;
            return &stats->normal[first + index];
        }
    case 1:
        {
            u32 first = group * 2;
            first -= 2;
            return &stats->special[first + index];
        }
    default:
        return NULL;
    }
}

/* Clears the count and level of the stat record each table-18 entry names. */
void FUN_0040a640(void)
{
    StatResetEntry *entries = dataTable18Sub0GetEntries();
    s32 count = dataTable18Sub0GetCount();

    s32 i = 0;
    while (i < count) {
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

        StatRecord *record = findRecord(gameDataBlocksGetStats(), kind, group, index);
        record->count = 0;
        record->level = 0;
        i++;
    }
}

} /* extern "C" */
