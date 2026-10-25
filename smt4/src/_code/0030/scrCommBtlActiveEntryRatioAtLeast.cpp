#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {

typedef struct ActiveEntryStats {
    /* 0x000 */ u8 unk000[0xE8];
    /* 0x0E8 */ u16 current;
    /* 0x0EA */ s16 maximum;
} ActiveEntryStats;

typedef struct ActiveEntry {
    /* 0x000 */ u8 unk000[0xCC];
    /* 0x0CC */ ActiveEntryStats stats;
} ActiveEntry;

extern int scrGetArg(s32 index);
extern ActiveEntry *btlMainFindActiveEntry(void);
extern int scrSetResult(int value);

static __inline int statsPercentage(const ActiveEntryStats *stats)
{
    int current = (s16)stats->current;
    int maximum = stats->maximum;
    return current * 100 / maximum;
}

/* Script command: pushes whether the active entry's current/maximum ratio (in percent) reaches argument 0. */
u32 scrCommBtlActiveEntryRatioAtLeast(void)
{
    int threshold = scrGetArg(0);
    ActiveEntry *entry;

    btlGetMainState();
    entry = btlMainFindActiveEntry();
    if (entry != NULL && threshold <= statsPercentage(&entry->stats)) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
