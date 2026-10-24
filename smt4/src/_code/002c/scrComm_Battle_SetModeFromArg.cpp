#include "common.h"

struct BattleMode {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ s32 mode;
};

extern "C" {

s32 scrGetArg(u32 index);
BattleMode *btlGetMainState(void);

/* Script command: sets the battle mode to 11 when the argument is nonzero, otherwise to 12. */
u32 scrComm_Battle_SetModeFromArg(void)
{
    if (scrGetArg(0) == 0) {
        btlGetMainState()->mode = 12;
    } else {
        btlGetMainState()->mode = 11;
    }
    return 1;
}

} /* extern "C" */
