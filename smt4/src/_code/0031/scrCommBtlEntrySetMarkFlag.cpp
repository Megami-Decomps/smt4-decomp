/* NON_MATCHING: register allocation only: retail keeps the loaded flag word in r2, built in r1. */
#include "common.h"

extern "C" {

typedef struct BtlEntry {
    /* 0x0 */ u32 flags;      /* bit 16: marked */
} BtlEntry;

extern s32 scrGetArg(s32 index);
extern void *btlGetMainState(void);
extern BtlEntry *btlMainFindEntryByListedId(void *main, u32 id);

/* Script command: sets (arg 1 > 0) or clears flag bit 16 of the battle entry with the listed id in argument 0. */
u32 scrCommBtlEntrySetMarkFlag(void)
{
    u32 id = scrGetArg(0);
    s32 on = scrGetArg(1);
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry != NULL) {
        if (on > 0) {
            entry->flags |= 0x10000;
        } else {
            entry->flags &= ~0x10000;
        }
    }
    return 1;
}

} /* extern "C" */
