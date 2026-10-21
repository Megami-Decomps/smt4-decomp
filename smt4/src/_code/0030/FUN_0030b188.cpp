/* NON_MATCHING: retail preserves the completion/mask constant in r5 across result-setting calls. */
#include "common.h"

struct BattleMain;
struct ActiveBattleEntry {
    u8 unk000[0x1c6]; // 0x000
    u16 flags;         // 0x1c6
};

extern "C" {
u32 scrGetArg(u32 index);
BattleMain* btlGetMainState();
ActiveBattleEntry* btlMainFindActiveEntry(BattleMain* state);
void scrSetResult(s32 result);

// Return the selected active-entry flag bit to the script.
u32 FUN_0030b188()
{
    u32 bit = scrGetArg(0);
    ActiveBattleEntry* entry = btlMainFindActiveEntry(btlGetMainState());
    if (entry != NULL && (entry->flags & (1u << bit)) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
}
