#include "battle/EntryStats.h"

extern "C" {


extern s32 scrGetArg(u32 index);
extern BtlMainState *btlGetMainState(void);
extern BtlActiveEntry *btlMainFindActiveEntry(BtlMainState *state);
extern void scrSetResult(s32 value);

/* Script command: 1 when the active entry's HP percentage is at most the argument, else 0. */
u32 scrBtlActiveHpPercentAtMost(void)
{
    s32 threshold = scrGetArg(0);
    BtlActiveEntry *entry;

    entry = btlMainFindActiveEntry(btlGetMainState());
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
