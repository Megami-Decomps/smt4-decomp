/* NON_MATCHING: the slot constant 0 is set before the argument call, and the stat is addressed with mov r1, #114 / register offset instead of add + ldrsh [r0, #114]. */
#include "common.h"

extern "C" {

typedef struct Stats {
    /* 0x00 */ u8 unk00[0x72];
    /* 0x72 */ s16 values[12];
} Stats;

typedef struct Character {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Stats *stats;
} Character;

extern u32 g_btlScriptUnit;

int btlUnitGet(u32 id);
int scrSetResult(int value);
int scrGetArg(int index);

/* Script command: passes to scrSetResult whether the stat selected by script argument 0 (0 -> 7, 1 -> 10, 2 -> 11) is positive. */
u32 FUN_003120e8(int firstArg)
{
    int which = scrGetArg(firstArg);
    int slot = 0;

    if (which == 0) {
        slot = 7;
    } else if (which == 1) {
        slot = 10;
    } else if (which == 2) {
        slot = 11;
    }
    scrSetResult(((Character *)btlUnitGet(g_btlScriptUnit))->stats->values[slot] >= 1);
    return 1;
}

} /* extern "C" */
