#include "common.h"

extern "C" {

typedef struct BtlEntryStats {
    /* 0x00 */ u8 unk00[0xE8];
    /* 0xE8 */ s16 hp;
    /* 0xEA */ s16 maxHp;
} BtlEntryStats;

typedef struct BtlActiveEntry {
    /* 0x00 */ u8 unk00[0xCC];
    /* 0xCC */ BtlEntryStats stats;
} BtlActiveEntry;

extern s32 scrGetArg(u32 index);
extern void btlGetMainState(void);
extern BtlActiveEntry *btlMainFindActiveEntry(void);
extern void scrSetResult(s32 value);

/* Script command: 1 when the active entry's HP percentage is at most the argument, else 0. */
u32 scrBtlActiveHpPercentAtMost(void)
{
    s32 threshold = scrGetArg(0);
    BtlActiveEntry *entry;

    btlGetMainState();
    entry = btlMainFindActiveEntry();
    if (entry != NULL) {
        BtlEntryStats *stats = &entry->stats;

        s32 hp = stats->hp;
        s32 maxHp = stats->maxHp;

        if (hp * 100 / maxHp <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

}
