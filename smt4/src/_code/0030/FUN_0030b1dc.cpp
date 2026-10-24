/* NON_MATCHING: needs -Ospace (constant division through __aeabi_idivmod); even then the compiler folds the 0x1B4/0x1B6 offsets into a different base register (add #256 instead of retail's add #204) and turns the result-1 path into predicated moves instead of retail's separate branch. */
#include "common.h"

extern "C" {

typedef struct ActiveEntry {
    /* 0x000 */ u8 unk000[0x1B4];
    /* 0x1B4 */ s16 current;
    /* 0x1B6 */ s16 maximum;
} ActiveEntry;

extern int scrGetArg(void);
extern void *btlGetMainState(void);
extern ActiveEntry *btlMainFindActiveEntry(void);
extern int scrSetResult(int value);

/* Script command: pushes whether the active entry's current/maximum ratio (in percent) reaches argument 0. */
u32 FUN_0030b1dc(void)
{
    int threshold = scrGetArg();
    ActiveEntry *entry;

    btlGetMainState();
    entry = btlMainFindActiveEntry();
    if (entry != NULL && threshold <= entry->current * 100 / entry->maximum) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
