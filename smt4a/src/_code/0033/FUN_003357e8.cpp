/* NON_MATCHING: compiler shares the command-mode store with a different switch case, placing case-alignment NOPs and tail branches differently from retail. */
#include "common.h"

struct BattleCommandState {
    u8 unk00[0xa8]; // 0x00
    u32 mode;        // 0xa8
};

extern "C" {
s32 scrGetArg(u32 index);
BattleCommandState* btlGetMainState(void);

// Maps the script selector to command modes 12, 11, or the default 5.
u32 FUN_003357e8(void)
{
    switch (scrGetArg(0)) {
    case 0:
        btlGetMainState()->mode = 12;
        break;
    case 1:
        btlGetMainState()->mode = 11;
        break;
    default:
        btlGetMainState()->mode = 5;
        break;
    }
    return 1;
}
}
