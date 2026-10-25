#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x1C6];
    /* 0x1C6 */ u16 flags;
} Record;

int scrSetResult(int value);
Record *btlMainFindActiveEntry(void);
u32 scrGetArg(int index);

/* Script command: passes to scrSetResult whether flag bit (script argument 0) is set in the current record's flags. */
u32 scrGetActiveEntryFlagBit(void)
{
    u32 bit = scrGetArg(0);

    reinterpret_cast<int>(btlGetMainState());
    Record *record = btlMainFindActiveEntry();
    if (record != NULL) {
        u32 flags = record->flags;
        if ((flags & (1 << bit)) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
