#include "common.h"

extern "C" {

typedef struct FlagEntry {
    /* 0x00 */ u8 on : 1;
    /* 0x00 */ u8 keep0 : 4;
    /* 0x00 */ u8 shown : 1;
    /* 0x00 */ u8 mode : 2;
    /* 0x01 */ u8 count;
    /* 0x02 */ u8 pending : 1;
    /* 0x02 */ u8 keep2 : 7;
    /* 0x03 */ u8 unk03;
} FlagEntry;

typedef struct FlagBlock {
    /* 0x000 */ u8 unk000[0x200];
    /* 0x200 */ FlagEntry entries[1];   /* indexed by entry id */
} FlagBlock;

extern FlagBlock *gameGetFlagBlock(void);
extern int table1bOr1cGetRecordValue(int index);
extern int FUN_0028eeb8(int index);

/* Resets flag entry `index` to its initial state (shown, on, no count, not pending) and refreshes it if needed. */
void flagEntryReset(int index)
{
    FlagEntry *entry = &gameGetFlagBlock()->entries[index];

    entry->count = 0;
    entry->pending = 0;
    entry->on = 1;
    entry->shown = 1;
    entry->mode = 0;
    if (table1bOr1cGetRecordValue(index) == 0) {
        FUN_0028eeb8(index);
    }
}

} /* extern "C" */
