/* NON_MATCHING: armcc cross-jumps the 50-79 tier's last flag call into the 100+ tier's copy (retail: into the 80-99 tier's), so the nop padding lands in the other block. */
#include "battle/BattleCommandMenu.h"
#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {
s32 FUN_002c5ef0(void);
u32 randBetween(u32 first, u32 last);


// Set cumulative quest-completion tier flags and optionally choose the corresponding reward index.
void questCompletionSetTierFlags(u32 *reward)
{
    if (reward != NULL)
        *reward = ~0u;
    if (!gameFlagIsSet(0x235))
        return;
    s32 completion = FUN_002c5ef0();
    u32 index = ~0u;
    if (completion <= 0) {
        if (reward == NULL) {
            gameFlagSetValue(0x535, 1, 1);
            return;
        }
        index = randBetween(11, 13);
        gameFlagSetValue(0x535, 1, 1);
    } else if (completion < 20) {
        if (reward != NULL)
            index = randBetween(6, 10);
        gameFlagSetValue(0x535, 1, 1);
        gameFlagSetValue(0x534, 1, 1);
    } else if (completion < 50) {
        if (reward != NULL)
            index = randBetween(3, 4);
        gameFlagSetValue(0x535, 1, 1);
        gameFlagSetValue(0x534, 1, 1);
        gameFlagSetValue(0x533, 1, 1);
    } else if (completion < 80) {
        index = 2;
        gameFlagSetValue(0x213, 1, 1);
        gameFlagSetValue(0x535, 1, 1);
        gameFlagSetValue(0x534, 1, 1);
        gameFlagSetValue(0x533, 1, 1);
    } else if (completion < 100) {
        index = 1;
        gameFlagSetValue(0x213, 1, 1);
        gameFlagSetValue(0x212, 1, 1);
        gameFlagSetValue(0x535, 1, 1);
        gameFlagSetValue(0x534, 1, 1);
        gameFlagSetValue(0x533, 1, 1);
    } else {
        index = 0;
        gameFlagSetValue(0x213, 1, 1);
        gameFlagSetValue(0x212, 1, 1);
        gameFlagSetValue(0x211, 1, 1);
        gameFlagSetValue(0x535, 1, 1);
        gameFlagSetValue(0x534, 1, 1);
        gameFlagSetValue(0x533, 1, 1);
    }
    if (reward == NULL)
        return;
    *reward = index;
}
}
