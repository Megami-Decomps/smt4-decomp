#include "battle/btlScript.h"
#include "battle/BattleUnitSlot.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct Stats {
    /* 0x00 */ u8 unk00[0x72];
    /* 0x72 */ s16 values[12];
} Stats;

typedef struct Character {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Stats *stats;
} Character;

int scrGetArg(int index);

/* Script command: passes to scrSetResult whether the stat selected by script argument 0 (0 -> 7, 1 -> 10, 2 -> 11) is positive. */
u32 scrBattleIsUnitStatPositive(void)
{
    int which = scrGetArg(0);
    int slot = 0;
    Stats *stats;

    if (which == 0) {
        slot = 7;
    } else if (which == 1) {
        slot = 10;
    } else if (which == 2) {
        slot = 11;
    }
    stats = reinterpret_cast<Character *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)))->stats;
    scrSetResult(stats->values[slot] >= 1);
    return 1;
}

} /* extern "C" */
